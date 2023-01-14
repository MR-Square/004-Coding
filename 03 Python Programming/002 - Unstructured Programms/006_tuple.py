# Tuple in Python

# In this program we will see what is tuple and its different methods.

'''
Tuple:
    A tuple can be defined as a collection of values or items of same/different 
    types.The items in the tuple are separated by comma(,) and enclosed in 
    paranthesis ().
'''

# There are two ways to declare an empty tuple.
t = ()      # first way.
t1 = tuple()    # second way.
print('t is a object of ',type(t),'and its address is ',id(t))
print('t1 is a object of ',type(t1),'and its address is ',id(t1))
print('\n')

# If you want to create a tuple with only one item, then you have to add a comma
# after item, otherwise it will be consider as a string.
t1 = ('a',)     # This is a tuple.
t2 = ('a')      # This is a string.
print('t1 is a object of ',type(t1))
print('t2 is a object of ',type(t2))
print('\n')

# In python tuples are immutable which means we can not modify it after creating
# it.

t = (1,2,3.3,4.4,'a','b')   # a new object would be created since it is immuatable.
print('Tuple t: ',t)

# You can access tuple items by referring to the index number,insed square bracket.
print('Tuple element at index 3 is ',t[3])

# In python there are no elements with negative index. But if you write -1 as a 
# index then it means you want the element at index len(tuple)-1 i.e first element
# from last of tuple.
print('Element at index -2 means second last element of tuple = ',t[-2])
print('\n')

# SLICING OF TUPLE:
'''
    Genera form = TupleName[start value : end value : step value]
    start value by default = 0
    end value by default = length of tuple.
    step value by default = 1
'''
print('Tuple t : ',t[::])
# Or you can simply write t.This is for just understanding the default values.
print('Elements from index 1 to 4: ',t[1:5])
print('Elements from index 0 to last with step value 2: ',t[0::2])
print('Elements of tuple t in reverse order: ',t[::-1])
print('\n')

# count method is used to return the number of times a specified value 
# appears in the tuple.
t1 = (1,2,3,4,2,5,3,4,2)
print('Tuple t1: ',t1)
x = t1.count(2)
print('Number of element 2 in tuple t1= ',x)

# index() method is used to  return the index of element where it is found first time.
x = t1.index(3)
print('Index of element 3 in tuple t1 = ',x)

# If you want to get help on tuple then run the below statement.
# print(dir(tuple))