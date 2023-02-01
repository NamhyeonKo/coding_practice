import sys

n = int(input())

xy = []

for i in range(n):
    xy.append(list(map(int, sys.stdin.readline().split())))

xy.sort(key=lambda x: (x[0], x[1]))

for i in range(n):
    print(xy[i][0], xy[i][1])