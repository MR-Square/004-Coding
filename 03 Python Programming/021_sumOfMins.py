# Given a 2D (nested) list (array,vector) of size m * n, your task is to find the sum of the minimum values in each row.
"""
[ [ 1, 2, 3, 4, 5 ]        #  minimum value of row is 1
, [ 5, 6, 7, 8, 9 ]        #  minimum value of row is 5
, [ 20, 21, 34, 56, 100 ]  #  minimum value of row is 20
]
so ans will be 1 + 5 + 20 = 26
"""

def sum_of_minimums(numbers):
    # return sum(map(min, numbers))
    min_val = 0
    for i in numbers:
        min_val = min_val + min(i)

    return min_val


if __name__ == '__main__':
    no_of_ele = int(input('enter no of elements:'))
    final_list = []
    for i in range(no_of_ele):
        numbers = list(list(map(int,input().split())))
        final_list.append(numbers)
    
    print(sum_of_minimums(final_list))