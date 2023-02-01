num = int(input())

cnt = [0] * 10

while num > 0:
    cnt[num % 10] += 1
    num = num // 10

for i in range(10):
    for j in range(cnt[9 - i]):
        print(9-i,end='')