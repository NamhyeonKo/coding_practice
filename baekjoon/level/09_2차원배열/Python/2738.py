import sys

n, m = map(int, input().split())

list1 = [0 for _ in range(n)]
list2 = [0 for _ in range(n)]

for i in range(n):
    list1[i] = list(map(int,sys.stdin.readline().split()))

for i in range(n):
    list2[i] = list(map(int,sys.stdin.readline().split()))

for i in range(n):
    for j in range(m):
        print(list1[i][j] + list2[i][j],end=' ')
    print()