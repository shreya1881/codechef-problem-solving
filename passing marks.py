# cook your code here
for t in range(int(input())):
    am, bm, cm, tm, a, b, c = map(int, input().split())
    print("Yes" if(a + b + c >= tm and a >= am and b >= bm and c >= cm) else "No")