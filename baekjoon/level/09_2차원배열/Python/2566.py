l = [0 for _ in range(9)]

for i in range(9):
    l[i] = list(map(int,input().split()))

Max = -1

for i in range(9):
    if max(l[i]) > Max:
        Max = max(l[i])
        Max_i = i
        Max_j = l[i].index(Max)

print(Max)
print(Max_i+1, Max_j+1)