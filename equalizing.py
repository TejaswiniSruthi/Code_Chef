# cook your dish here
t=int(input())
for _ in range(t):
    a,b=map(int,input().split())
    d=a-b
    if(a==b or d%2==0):
        print("yes")
    else:
        print("No")
