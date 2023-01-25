# 5597번 - 과제 안 내신 분..?

l = [0] * 30

for i in range(28):
    n = int(input())
    l[n-1] = 1

for i in range(30):
    if l[i] == 0:
        print(i+1)