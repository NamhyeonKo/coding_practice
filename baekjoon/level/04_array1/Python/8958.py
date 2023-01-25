# 8958번 - OX 퀴즈

n = int(input())

for i in range(n):
    l = input()
    sum = 0
    s = 0
    for j in range(len(l)):
        if l[j] == 'O':
            s += 1
            sum += s
        else:
            s = 0
    print(sum)