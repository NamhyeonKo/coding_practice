import sys

n = int(input())

xy = []

for i in range(n):
    xy.append(list(sys.stdin.readline().split()))

for i in range(n):
    xy[i][0] = int(xy[i][0])

xy.sort(key=lambda x: (x[0]))

for i in range(n):
    print(xy[i][0], xy[i][1])