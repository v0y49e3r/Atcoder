n =  int(input())
x = list(map(int,input().split()))
dic ={}
min_len = 10000000
for i in range(n):
   if x[i] in dic:
        min_len = min(min_len,i - dic[x[i]] + 1)
   dic[x[i]] = i
if min_len == 10000000:
    print(-1)
else:
    print(min_len)

