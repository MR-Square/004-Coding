# Given an array of integers as strings and numbers, return the sum of the array values as if all were numbers.

def sum_mix(num):
    return sum(map(int,num))


if __name__ == '__main__':
    num = list(input('enter your numbers:').split())
    print(sum_mix(num))