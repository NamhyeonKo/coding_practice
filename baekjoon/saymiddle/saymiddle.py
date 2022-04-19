num = []

n = int(input())

for i in range(n):
    add = int(input())
    num.append(add)

    num.sort()

    index = int(i / 2)

    print(num[index])