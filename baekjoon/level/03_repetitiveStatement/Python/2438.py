# 2438번 - 별 찍기 - 1

n = int(input())

for i in range(n):
    for k in range(n-i-1):
        print(" ",end='')
    for j in range(i+1):
        print('*',end='')
    print()