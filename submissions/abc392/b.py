
n,m = map(int,input().split())

l = set(map(int, input().split()))  # Chuyển danh sách thành set để tra cứu nhanh hơn

result = []

for i in range(1, n+1):  # Kiểm tra các số từ 1 đến N
    if i not in l:
        result.append(i)

print(len(result))  # In ra số lượng phần tử không có trong danh sách A
for i in result:  # In ra từng phần tử trong kết quả
    print(i)

