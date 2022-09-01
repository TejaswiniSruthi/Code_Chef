def tough(n,s):
    count=0
    for i in s:
        if i in val:
            count=0
        else:
            count+=1
        if(count==4):
            return False
    else:
        return True
val={'a','e','i','o','u'}
t=int(input())
for _ in range(t):
    n=int(input())
    s=input()
    res=tough(n,s)
    if(res):
        print("YES")
    else:
        print("NO")
