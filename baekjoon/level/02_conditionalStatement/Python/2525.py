# 2525번 - 오븐 시계

h, m = map(int,input().split())
t = int(input())

t1 = t // 60
t2 = t % 60

m += t2
h += t1

if m >= 60:
    m -= 60
    h += 1

if h >= 24:
    h -= 24

print(h,m) 