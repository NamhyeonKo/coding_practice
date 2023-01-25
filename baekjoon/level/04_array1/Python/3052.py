# 3052번 - 나머지

namogi = [0] * 42

for i in range(10):
    n = int(input())
    namogi[n%42] = 1

cnt = namogi.count(1)

print(cnt)