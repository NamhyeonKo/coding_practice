# 10952번 - A+B - 5
import sys

while True:
    a,b = map(int, sys.stdin.readline().split())
    if (a==0) & (b==0):
        break
    print(a+b)