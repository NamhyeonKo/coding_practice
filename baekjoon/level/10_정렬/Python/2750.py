n = int(input())

arr = [int(input()) for i in range(n)]

arr.sort()

for i in range(n):
    print(arr[i])