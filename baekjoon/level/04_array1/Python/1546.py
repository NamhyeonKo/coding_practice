# 1546번 - 평균
import sys

n = int(input())

score1 = list(map(int, sys.stdin.readline().split()))
max = max(score1)
sum = 0.0

for i in range(n):
    sum += score1[i] / max * 100

print(sum/n)