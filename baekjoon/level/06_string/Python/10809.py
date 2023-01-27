s = list(input())

alp = 'abcdefghijklmnopqrstuvwxyz'

for a in alp:
    try:
        index = s.index(a)
        print(index, end=' ')
    except:
        print(-1, end=' ')