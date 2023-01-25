# 1110번 - 더하기 사이클

n = int(input())

k = n
cnt = 0

while True:
    l = k // 10
    r = k % 10
    sum = l + r
    
    k = r * 10 + (sum % 10)

    cnt += 1
    
    if k == n:
        break

print(cnt)
