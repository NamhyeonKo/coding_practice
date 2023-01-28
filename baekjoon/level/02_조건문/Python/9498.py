# 9498번 - 시험 성적
score = int(input())

if (score <= 100) & (score >= 90):
    print("A")
elif (score < 90) & (score >= 80):
    print("B")
elif (score < 80) & (score >= 70):
    print("C")
elif (score < 70) & (score >= 60):
    print("D")
else:
    print("F")