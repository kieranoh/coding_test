diary = ["MON","TUE", "WED","THU","FRI","SAT","SUN"]
month = [31,28,31,30,31,30,31,31,30,31,30,31]
m , d = map(int,input().split())
day = -1
for i in range(m-1):
    day = day + month[i]

day = day + d
day = day%7

print(diary[day])