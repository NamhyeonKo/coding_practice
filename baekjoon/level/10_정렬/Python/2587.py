num = [int(input()) for i in range(5)]

num.sort()
sum = 0

for i in range(len(num)):
    sum += num[i]

avg = int(sum / 5)

print(avg)
print(num[2])