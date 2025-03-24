# n,m = map(int,input().split())
# a = list(map(int,input().split()))
# x = []

y = [input().strip() for _ in range(8)]

# for _ in range(8):
#     x.append(list(map(int,input().split())))
row = set()
column = set()

for i in range(8):
    for j in range(8):
        if y[i][j] == "#":
            row.add(i)
            column.add(j)
safe_count = 0
for i in range(8):
    for j in range(8):
        if y[i][j] == "." and i not in row and j not in column:
            safe_count +=1
print(safe_count)


