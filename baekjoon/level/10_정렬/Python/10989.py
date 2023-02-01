import sys

num = [0] * 10001

num[0] = int(sys.stdin.readline())

for i in range(num[0]):
    num[int(sys.stdin.readline())] += 1

for i in range(1, 10001):
    for j in range(num[i]):
        print(i)