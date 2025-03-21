stack = [0] * 100
n = int(input())


result = []
for _ in range(n):
    q = input().split()
    if q[0] == "1":
        stack.append(int(q[1]))
    else:
        result.append(stack.pop())
for num in result:
    print(num)


