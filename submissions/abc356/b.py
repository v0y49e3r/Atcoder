n,m = map(int,input().split())
a = list(map(int,input().split()))
x = []
for _ in range(n):
    x.append(list(map(int,input().split())))
for j in range(m):
    total = 0
    for i in range(n):
        total += x[i][j]
    if total < a[j]:
        print("No")
        exit()
print("Yes")
            


