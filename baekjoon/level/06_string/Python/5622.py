alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

string = list(input())
sum = 0
t = 1

for s in string:
    if "A" <= s <= "O":
        sum += t + (ord(s) - 65) // 3 + 2
    elif "P" <= s <="S":
        sum += t + 7
    elif "T" <= s <="V":
        sum += t + 8
    else:
        sum += t + 9

print(sum)