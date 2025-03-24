s = input()
count = 0
for i in range(len(s)):
    for j in range(i+1,len(s)):
       k = 2 * j - i
       if k < len(s) and s[i] ==  "A" and s[j] == "B" and s[k] == "C":
           count+=1
print(count)


