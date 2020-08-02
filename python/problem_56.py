'''
Powerful digit sum
Problem 56

A googol (10^100) is a massive number: one followed by one-hundred 
zeros; 100^100 is almost unimaginably large: one followed by 
two-hundred zeros. Despite their size, the sum of the digits in each 
number is only 1.

Considering natural numbers of the form, a^b, where a, b < 100, what is 
the maximum digital sum?
'''

num_list = []

for a in range(100):
    for b in range(100):
        l = [a, b, a**b, 0]
        for digit in str(l[2]):
            l[3] += int(digit)
        num_list.append(l)

sum_list = []

for num in num_list:
    sum_list.append(num[3])

sum_list.sort(reverse=True)

print (sum_list[0])
