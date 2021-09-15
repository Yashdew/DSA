x=int(input())
i = 0
j=0
n=0
sum1=1
i = int(i)
j = int(j)
n = int(n)
sum1 = int(sum1)

if(x>0 and x<101):
    while i < x:
        n=int(input())
        sum1=1
        while n!=0:
            sum1=sum1*n
            n=n-1
        print(sum1)
        i=i+1
