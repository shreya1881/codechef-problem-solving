t=int(input())
for i in range(t):
    count=0
    n=int(input())
    x = list(map(int,input().split()))
    s=set(x)
    for k in s:
        count=count+1
    print(count)
    