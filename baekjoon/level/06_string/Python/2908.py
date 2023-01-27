num = list(input().split())

num[0] = int("".join(reversed(num[0])))
num[1] = int("".join(reversed(num[1])))

print(max(num))
