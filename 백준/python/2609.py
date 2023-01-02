def gcd(a,b):
    if a<b:
        a , b = b ,a

    while(True):
        temp = a%b
        a ,b = b, temp

        if b ==0:
            break

    return a

a,b = map(int,input().split())
print(gcd(a,b))
print(a*b//gcd(a,b))