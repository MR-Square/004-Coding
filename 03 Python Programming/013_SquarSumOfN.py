# Complete the square sum function so that it squares each number passed into it and 
# then sums the results together.For example, for [1, 2, 2] it should return 9 because 
# 1^2 + 2^2 + 2^2 = 9

def power_sum(arr):
    # return sum([pow(i,2) for i in arr])
    return sum(x * x for x in arr)

print(power_sum([1,2,2]))
print(power_sum([1,2,3]))