# 10871번 - x보다 작은 수
import sys

n, x = map(int, input().split())

l = list(map(int, sys.stdin.readline().split()))

for i in l:
    if i < x:
        print(i,end=" ")