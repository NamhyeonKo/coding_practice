word = list(input())
cnt = len(word)

i = 0

while i < len(word) - 1:
    if (word[i]=='c') & ((word[i+1]=='=') | (word[i+1]=='-')):
        i += 1
    elif i < len(word) - 2:
        if (word[i]=='d') & (word[i+1]=='z') & (word[i+2]=='='):
            i += 2
    elif (word[i]=='d') & (word[i+1]=='-'):
        i + 1
    elif (word[i]=='n') & (word[i+1]=='j'):
        i += 1
    elif (word[i]=='l') & (word[i+1]=='j'):
        i += 1
    elif (word[i]=='s') & (word[i+1]=='='):
        i += 1
    elif (word[i]=='z') & (word[i+1]=='='):
        i += 1
    
    cnt += 1
    i += 1
print(cnt)