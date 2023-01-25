#! 3003번 - 킹, 퀸, 룩, 비숍, 나이트, 폰

normal = [1,1,2,2,2,8]

input1 = map(int, input().split())

for n, i in zip(normal, input1):
    print(n-i, end=" ")