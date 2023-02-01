import sys
from bisect import bisect_left

n = int(sys.stdin.readline()) # O(1)

num = list(map(int, sys.stdin.readline().split())) # O(n)

sortednum = list(set(num)) # O(n * log n)
sortednum = sorted(sortednum)

for i in range(n):
    cnt = bisect_left(sortednum, num[i])
    print(cnt,end=' ')