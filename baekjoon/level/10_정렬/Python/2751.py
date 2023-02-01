import sys

n = int(input())

num = [int(sys.stdin.readline()) for i in range(n)]

num.sort()

for i in range(n):
    print(num[i])