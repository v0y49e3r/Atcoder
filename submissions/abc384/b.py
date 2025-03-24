

n,r = map(int,input().split())

for _ in range(n):
    d,a = map(int,input().split())
    if (d == 1 and (r>=1600 and r <=2799)):
        r += a
    elif(d == 2 and(r >= 1200 and r<= 2399)):
        r += a
    else:
        continue
print(r)
