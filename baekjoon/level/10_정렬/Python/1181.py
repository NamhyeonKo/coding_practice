import sys

n = int(input())

word = []

for i in range(n):
    word.append(sys.stdin.readline().rstrip())

word = list(set(word))

word.sort(key=lambda x: (len(x),x))

for w in word:
    print(w)