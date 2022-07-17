case = int(input())
for i in range(case):
    data = list(map(int,input().split()))
    x_1 , y_1, r_1,x_2,y_2,r_2 = data[0],data[1],data[2],data[3],data[4],data[5]
    d = ((x_2-x_1)**2 + (y_2-y_1)**2)**0.5
    if(x_1 == x_2) and (y_1 == y_2) and (r_1 == r_2):
        print(-1)
    elif (abs(r_2-r_1)<d<(r_2+r_1)):
        print(2)
    elif(r_2+r_1 == d) or (abs(r_2-r_1) == d):
        print(1)
    else:
        print(0)
