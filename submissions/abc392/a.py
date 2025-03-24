a,b,c = map(int,input().split())
arr = [a,b,c]
arr.sort()
if arr[0] * arr[1] == arr[2]:
    print("Yes")
else:
    print("No")
