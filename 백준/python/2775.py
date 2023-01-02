Tc = int(input())
for i in range(Tc):
    k = int(input())
    n = int(input())
    flr = [x+1 for x in range(n)]
    for _ in range(k):
        for idx in range(1,n):
            flr[idx] = flr[idx] + flr[idx-1]
    print(flr[-1])