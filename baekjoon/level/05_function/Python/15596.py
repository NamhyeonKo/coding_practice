# 15596번 - 정수 N개의 합

def solve(a):
    sum = 0
    for i in range(len(a)):
        sum += a[i]
    return sum