n = int(input())
cnt = 0

for i in range(0, n):
    alp = [0] * 26
    word = input()

    for j in range(len(word)):
        if alp[ord(word[j]) - 97] == 0:
            alp[ord(word[j]) - 97] = 1
            continue
        elif word[j - 1] == word[j]:
            continue
        else:
            cnt -= 1
            break
    
    cnt += 1

print(cnt)