# 10807번 - 개수 세기

n = int(input())
l = list(map(int,input().split()))
k = int(input())

# cnt = 0

# for x in l:
#     if x == k:
#         cnt += 1


cnt = l.count(k)

print(cnt)
