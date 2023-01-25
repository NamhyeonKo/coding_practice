# 2562번 - 최댓값

l = []

for i in range(9):
    a = int(input())
    l.append(a)

max = max(l)
index = l.index(max) + 1

print(max)
print(index)