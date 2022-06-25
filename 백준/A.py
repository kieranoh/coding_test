total = int(input())
num = int(input())

sum = 0
for _ in range(num):
    money ,count= map(int,input().split())

    sum += (money * count)

if sum == total:
    print("Yes")
else:
    print("No")