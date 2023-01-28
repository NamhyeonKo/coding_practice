# 2480번 - 주사위 세개

arr = list(map(int, input().split()))

sum = 0

if (arr[0]==arr[1]) & (arr[0]==arr[2]):
    sum = 10000 + arr[0] * 1000
elif arr[0]==arr[1]:
    sum = 1000 + arr[0] * 100
elif arr[1]==arr[2]:
    sum = 1000 + arr[1] * 100
elif arr[2]==arr[0]:
    sum = 1000 + arr[2] * 100
else:
    big = max(arr)
    sum = big * 100

print(sum)