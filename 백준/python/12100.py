from copy import deepcopy
N = int(input())
table = []
for _ in range(N):
    table.append(list(map(int,input().split())))

def move_right(temp_table):
    result = []
    for nums in deepcopy(temp_table):
        new_tb = []
        new_tb_z = []
        nums.reverse()
        new_tb, new_tb_z = move(nums)
        new_tb.reverse()
        result.append(new_tb_z + new_tb)

    return result

def move_left(temp_table):
    result = []
    for nums in deepcopy(temp_table):
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
    global N
    result= []
    new_table = []
    for i in range(N):
        new_line = []
        for j in range(N):
            new_line.append(temp_table[j][i])

        new_line.reverse()
        new_table.append(new_line)
    temp = move_right(new_table)
    for i in range(N-1,-1,-1):
        new_line = []
        for j in range(N): 
            new_line.append(temp[j][i])

        result.append(new_line)
    return result

def move_bottom(temp_table):
    global N
    result= []
    new_table = []
    for i in range(N):
        new_line = []
        for j in range(N):
            new_line.append(temp_table[j][i])
        new_table.append(new_line)
    temp = move_right(new_table)
    for i in range(N):
        new_line = []
        for j in range(N):
            new_line.append(temp[j][i])
        result.append(new_line)
    return result    

def IS_all_zero(table):
    count = 0
    for nums in table:
        for num in nums:
            if num != 0:
                count +=1
            if count == 2 :
                return False
    return True

queue = []
queue.append([table,0])
max_num = max(max(table))
while True:
    new_table,count = queue[0][0],queue[0][1]
    del queue[0]
    if count  > 5:
        break
    if count == 5:
        max_num = max(max_num,max(max(new_table)))
    queue.append([move_top(deepcopy(new_table)),count+1])
    queue.append([move_bottom(deepcopy(new_table)),count+1])
    queue.append([move_right(deepcopy(new_table)),count+1])
    queue.append([move_left(deepcopy(new_table)),count+1])

print(max_num)

'''

4
2 2 2 2
0 0 0 0
2 2 2 2
0 0 0 0

'''