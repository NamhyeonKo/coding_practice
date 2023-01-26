# 4673번 - 셀프 넘버

def d(n):
    sum = n

    while n > 0:
        sum += n % 10
        n = n // 10

    return sum

arr = [0] * 10001

for i in range(1, 10000):
    k = i
    while k <= 10000:
        b = d(k)
        if b > 10000:
            break
        arr[b - 1] = 1
        k = b

for i in range(10000):
    if arr[i] == 0:
        print(i+1)