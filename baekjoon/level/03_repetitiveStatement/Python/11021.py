# 11021번 - A+B - 7
import sys

n = int(input())

for i in range(n):
    a,b = map(int, sys.stdin.readline().split())
    print(f"Case #{i+1}: {a+b}")