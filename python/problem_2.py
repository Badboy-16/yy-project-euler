list_ = [1, 2]
while list_[-1] <= 4000000:
    incre = list_[-1] + list_[-2]
    list_.append(incre)

sum_ = 0
for num in list_:
    if num % 2 == 0:
        sum_ += num

print(sum_)
