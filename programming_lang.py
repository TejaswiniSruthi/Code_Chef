t=int(input())
for _ in range(t):
    a,b,c,d,e,f=map(int,input().split())
    val1={c,d}
    val2={e,f}
    if(a in val1 and b in val1):
        print(1)
    elif(a in val2 and b in val2):
        print(2)
    else:
        print(0)
