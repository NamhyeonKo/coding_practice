import sys

n = int(sys.stdin.readline())

num = [int(sys.stdin.readline()) for i in range(n)]

num.sort()
cb = -4001
cbn = 0
flag = 0

cnt = [0] * 8001

for i in num:
    cnt[i+4000] += 1

for i in range(8001):
    if cnt[i] > cb:
        cb = cnt[i]
        cbn = i - 4000
        flag = 1
    elif (cb == cnt[i]) & (flag == 1):
        cb = cnt[i]
        cbn = i - 4000
        flag = 0
    

print(round(sum(num) / n))
print(num[n // 2])
print(cbn)
print(num[n-1]-num[0])
