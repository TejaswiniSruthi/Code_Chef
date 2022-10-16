t=int(input())
for _ in range(t):
    n=int(input())
    lst=list(map(int,input().split()))
    h=8+n
    for i in lst:
        if(i%7==0 or (i+1)%7==0):
            h-=1
    print(h)
