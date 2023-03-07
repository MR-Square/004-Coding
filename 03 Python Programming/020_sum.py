# Write a function that takes an array of numbers and returns the sum of the numbers. 
# The numbers can be negative or non-integer. If the array does not contain any numbers 
# then you should return 0.

def sum_array(a):
    # return sum(i for i in a)
    return sum(a)

print(sum_array([1,2,3,0]))
print(sum_array([1,2,3,0,-1]))