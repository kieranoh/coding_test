table = []
for _ in range(8):
    table.append(list(map(int,input().split())))

def move_right(temp_table):
    result = []
    for nums in temp_table:
        new_tb = []
        new_tb_z = []
        nums.reverse()
        new_tb, new_tb_z = move(nums)
        new_tb.reverse()
        result.append(new_tb_z + new_tb)

    return result

def move_left(temp_table):
    result = []
    for nums in temp_table:
        new_tb, new_tb_z = move(nums)
        result.append(new_tb + new_tb_z)
    return result

def move(nums):
    cnt_sum = 0
    count = 0
    new_tb = []
    while 0 in nums:
        nums.remove(0)
        count += 1
    new_tb_z= [0] * count
    if len(nums) > 0:
        f_num = nums[0]
        idx = 1
        if len(nums) == 1:
            new_tb.append(f_num)
        while idx <= len(nums[1:]):
            if f_num == nums[idx]:
                new_n = f_num * 2
                new_tb.append(new_n)
                f_num = 0
                idx +=1
                cnt_sum += 1
                
            elif f_num == 0:
                f_num = nums[idx]
                if idx == len(nums)-1:
                    new_tb.append(f_num)
                    
                idx+=1
            else:
                new_tb.append(f_num)
                f_num = nums[idx]
                idx +=1
                if idx-1 == len(nums)-1:
                    new_tb.append(nums[idx-1])
    for _ in range(cnt_sum):
        new_tb_z.append(0)
                
    return new_tb, new_tb_z   

def move_top(temp_table):
    result= []
    new_table = []
    for i in range(8):
        new_line = []
        for j in range(8):
            new_line.append(temp_table[j][i])

        new_line.reverse()
        new_table.append(new_line)
    temp = move_right(new_table)
    for i in range(7,-1,-1):
        new_line = []
        for j in range(8): 
            new_line.append(temp[j][i])

        result.append(new_line)
    return result

def move_bottom(temp_table):
    result= []
    new_table = []
    for i in range(8):
        new_line = []
        for j in range(8):
            new_line.append(temp_table[j][i])
        new_table.append(new_line)
    temp = move_right(new_table)
    for i in range(8):
        new_line = []
        for j in range(8):
            new_line.append(temp[j][i])
        result.append(new_line)
    return result    

moving = input()
if moving == 'U':
    new_table = move_top(table)
elif moving =='D':
    new_table = move_bottom(table)
elif moving == 'L':
    new_table = move_left(table)
else:
    new_table = move_right(table)

for i in range(8):
    for j in range(8):
        print(new_table[i][j], end=' ')
    print()


