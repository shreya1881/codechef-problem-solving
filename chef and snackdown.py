# cook your dish here
try:
    t = int(input())
    l = [2010,2015,2016,2017,2019]
    while t>0:
        n = int(input())
        if n in l:
            print("HOSTED")
        else:
            print("NOT HOSTED")
        t=t-1
except:
    pass