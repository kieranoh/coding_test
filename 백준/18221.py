N = int(input())
table = []
for i in range(N):
    table.append(list(map(int,input().split())))

    for j in range(N):
        if table[i][j] ==5:
            pr,  pc = i,j

        if table[i][j] ==2:
            sr,sc = i,j

if ((pr - sr)**2 + (pc-sc)**2)**(1/2) <5 :
    print(0)
else:
    t_r = abs(pr-sr)+1
    t_c = abs(pc-sc)+1
    student_count = 0
    for i in range(min(pr,sr),min(pr,sr)+t_r):
        for j in range(min(pc,sc),min(pc,sc)+t_c):
            if table[i][j] == 1:
                student_count +=1

    if student_count < 3:
        print(0)
    else:
        print(1)