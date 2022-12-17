n=int(input())
for _ in range(n):
    a,b,z=map(int,input().split())
    if a==b or a%b==0:
        print(-1)
    else:
        if a>=z:
            i=a
        else:
            if z%a==0:
                i=z
            else:
                i=z-(z%a)+a
        while i:
            if i%a==0 and i%b!=0:
                print(i)
                break
            i+=a