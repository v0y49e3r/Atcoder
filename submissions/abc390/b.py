a = int(input())
arr = list(map(int,input().split()))
r1, r2 = arr[0],arr[1]
for i in range(2,a):
    if arr[i] * arr[0] != arr[i-1]*arr[1]:
        print("No")
        exit()
print("Yes")
