# 4344번 - 평균은 넘겠지

import sys

n = int(input())

for i in range(n):
    cnt = 0
    sum = 0
    l = list(map(int,sys.stdin.readline().split()))

    for j in range(1, l[0]+1):
        sum += l[j]
    avg = sum / l[0]

    for j in range(1, l[0]+1):
        if l[j] > avg:
            cnt += 1

    print("{:.3f}%".format(cnt / l[0]*100))
