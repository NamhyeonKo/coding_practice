# input item_count and max_weight
n, max_weight = map(int,input().split())


# make list of weight and value
weight = []
value = []

# input weight and value
for i in range(0,n):
    w , v = map(int,input().split())
    weight.append(w)
    value.append(v)

# desc list of weight and value about value
for i in range(0,n):
    for j in range(0,n):
        if(value[i]<value[j]):
            tmp_value = value[i]
            value[i] = value[j]
            value[j] = tmp_value

            tmp_weight = weight[i]
            weight[i] = weight[j]
            weight[j] = tmp_weight

# calculate max value
max_value = 0
for i in range(0,n):
    sum_value = 0
    sum_weight = 0
    k = i
    while(True):
        if(sum_weight+weight[k]<=max_weight):
            sum_value += value[k]
            sum_weight += weight[k]
        k += 1
        if(k==n):
            break
    if(sum_value>=max_value):
        max_value = sum_value

print(max_value)

