m = int(input())
result = []
for i in range(10,-1,-1):
    while m>=3 **i:
        result.append(i)
        m -= 3 ** i
print(len(result))
print(*result)





