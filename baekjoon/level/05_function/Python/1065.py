# 1065번 - 한수

def han(k):
    if k >= 100:
        d1 = k % 10
        d2 = (k // 10) % 10
        d3 = k // 100
        if d1 - d2 == d2 - d3:
            return 1
        else:
            return 0
    return 1

n = int(input())
cnt = 0

for i in range(n):
    if i + 1 < 100:
        cnt += 1
        continue
    elif han(i + 1) == 1:
        cnt += 1

print(cnt)

