p,q = map(str,input().split())

dic = {
        "A" : 0,
        "B" :3 ,
        "C" :4,
        "D" :8,
        "E" :9,
        "F" : 14,
        "G" : 23
        }

result = abs(dic[q] - dic[p])
print(result)


