# 25304번 - 영수증

x = int(input())
n = int(input())
sum = 0

for i in range(n):
    p, cnt = map(int, input().split())
    sum += p * cnt

if sum == x:
    print("Yes")
else:
    print("No")