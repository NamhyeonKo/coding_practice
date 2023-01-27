n = int(input())

for i in range(n):
    k, string = input().split()
    k = int(k)
    for s in string:
        for j in range(k):
            print(s,end='')
    print()