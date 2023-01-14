# set in Python

# In this program we will see what is set and its different methods.

'''
Set :
    A set can be defined as an unordered collection of similar or different
    data types that is iterable,mutable and has no duplicate elements.
'''

# There is only single way to declare an empty set.
s1 = set()      # an empty set.
s2 = {}         # It is not an empty set,it is dictionary.
print(f's1 is object of {type(s1)}')
print(f's2 is object of {type(s2)} ')

# In python sets are mutable that means we can modify it after creating it.
s1 = {1,2,3,4.4,5.5,'a','b'}
print(f'Set s1: {s1} ')

# Repeted value will be consider as a single time means duplicate values
# will be remove.
s2 = {1,2,3,4,1,5,2}
print(f'Set s2: {s2} ')
print('\n')
 

# Methods for set in python.
s3 = {1,2,3,4,5}
print(f'Set s3: {s3} ')

# add() method is used to add an element to the set.
s3.add(6)
print(f'After adding element 6 in s3: {s3} ')

# difference() method is used to returns a set that contains the 
# difference between two sets.
s4 = {1,2,'a','b'}
s5 = {1,3,'a','c'}
x = s4.difference(s5)
# This will take all the elements from set s4 which does not belongs to s5.
print(f'Element which belong to s4 but no s5: {x}')

# remove() method is used to remove the specified item from the set.
s5.remove('c')
print(f'After removing element c from set s5: {s5}')

# union() method is used to combine two sets.
print(f'Set s4: {s4} ')
print(f'Set s5: {s5} ')
x = s4.union(s5)    # or you can also write s5.union(s4)
print(f'Union of s4 and s5:{x} ')

# issubset() method is used to check whether a set is subset of another
# set or not.
x = s4.issubset(s5)
print(f'Is s4 subset of s5= {x} ')
y = s5.issubset(s4)
print(f'Is s5 subset of s4= {y} ')

# clear() method is used to clear all the elements of a set.
s3.clear()
print(f'After using clear method set s3: {s3} ')