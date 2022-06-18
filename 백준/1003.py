
ans_lst = [0] * 41
def fibo(n):
    if ans_lst[n] == 0:
        if n == 0:
            ans_lst[n] = (1,0)
        elif n == 1:
            ans_lst[n] = (0,1)
        else:
            if ans_lst[n-1] == 0:
                fibo(n-1)
            if ans_lst[n-2] == 0:
                fibo(n-2)
            
            ans_lst[n] = (ans_lst[n-1][0]+ans_lst[n-2][0], ans_lst[n-1][1]+ans_lst[n-2][1])


case = int(input())
for i in range(case):

    num = int(input())
    fibo(num)
    print(ans_lst[num][0], ans_lst[num][1])
    

