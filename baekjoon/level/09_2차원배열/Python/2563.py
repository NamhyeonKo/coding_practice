mylist = [[0]*100 for _ in range(100)]
cnt = 0

n = int(input())

for i in range(n):
    sero, garo = map(int, input().split())
    for j in range(10):
        for k in range(10):
            mylist[j+sero][k+garo] = 1


for i in range(100):
    cnt += mylist[i].count(1)

print(cnt)