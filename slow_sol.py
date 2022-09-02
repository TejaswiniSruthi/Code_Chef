# cook your dish here
t=int(input())
for _ in range(t):
    p,q,r=map(int,input().split())
    if((r//q)>=p):
        print(p*(q*q))
    else:
        res=(r//q)*(q*q)+((r%q)*(r%q))
        print(res)
