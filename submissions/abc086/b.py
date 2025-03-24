import math

a, b = input().split()
num = int(a + b)

sqrt_num = int(math.sqrt(num))  # Lấy căn bậc hai
if sqrt_num * sqrt_num == num:
    print("Yes")
else:
    print("No")
