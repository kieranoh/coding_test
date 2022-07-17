num = int(input())
if num == 1:
    print(0)
else:
    cnt = 0
    while num != 1:
        n=1
        while n*2 < num:
            n = n*2
        num -= n
        cnt += 1
    if cnt%2 == 0:
        print(0)
    else:
        print(1)