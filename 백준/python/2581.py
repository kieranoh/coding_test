def find(num):
    if num == 0 or num == 1:
        return False
    for i in range(2,int(num**(1/2))+1):
        if num % i == 0:
            return False
        
    return True

start = int(input())
end = int(input())
result = []
for i in range(start, end+1):

    if find(i) == True:
        result.append(i)
if len(result) == 0:
    print("-1")
else:
    print(sum(result))
    
    print(result[0])