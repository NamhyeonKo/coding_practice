string = input()

cnt = [0] * 26

for i in range(26):
    cnt[i] = string.count(chr(i+65)) + string.count(chr(i+97))

if cnt.count(max(cnt)) == 1:
    print(chr(cnt.index(max(cnt))+65))
else:
    print("?")