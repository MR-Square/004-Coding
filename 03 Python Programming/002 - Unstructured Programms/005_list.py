# list in Python 


# In this program we will see what is list, and its different functions.

'''
List : 
    A list can be defined as a collection of values or items of same/different types.
The items in the list are separated with the comma (,) and enclosed in square brackets [].
'''

# There are two ways to declare an empty list.

l = []      # first way.
l1 = list()  # second way.
print('l is a object of ',type(l))
print('l1 is a object of ',type(l1))
print('\n')

# In Python lists are mutable which means we can modify it after creating it.

# let's add some elements in list.
l = [1,2,4.4,'a','mr square']
l1 = [12,95,45]

# Let's take the elements from user.

# append() function is used to take one element of list from user.
l1.append(int(input('Enter a integer:')))
print('list l1: ',l1)

# Similarly insert(position,element) function is also use to add an element at the specified position.
l1.insert(1,int(input('Enter a integer:'))) 
print('list l1: ',l1)
print('\n')

# extend() function is used to add elements of one list into another list.
l2 = ['a','b','c','d']
l3 = ['e','f','g','h']
print('list l2:',l2)
print('list l3:',l3)
l2.extend(l3)
print('l2 extend with l3',l2)
print('\n')

# sort() function is used to sort the list in ascending order.
print('list l1:',l1)
l1.sort()
print('After sorting of list l1: ',l1)
print('\n')

# index() function is used to return the first appearance of a particular value.
x= l2.index('g')
print('list l2: ',l2)
print('Index of g element in l2 =',x)
print('\n')

# max() function is used to return an item from the list with a max value.
x = max(l1)
y=max(l2)
print('list l1: ',l1)
print('list l2: ',l2)
print('element with maximum value in l1=',x)
print('element with maximum vlaue in l2=',y)

# min() function is used to return an item from the list with a min value.
x = min(l1)
y = min(l2)
print('element with minimum value in l1=',x)
print('element with minimum value in l1=',y)
print('\n')

# copy() function is used to return a copy of a list.
l4 = l3.copy()
print('list l3: ',l3)
print('list l4 which is copy of list l3:',l4)
print('\n')

# count() function is used to return the numbers of elements with the specified value.
l5 = ['a','b','a','y','a','c']
x = l5.count('a')
print('list l5: ',l5)
print("number of element 'a' in list l5=",x)
print('\n')

# reverse() function is used to reverse the order of the list.
print('list l4: ',l4)
l4.reverse()
print('reverse of list l4 :',l4)
print('\n')
# Now we will see how to remove element of list in python.

# remove() function is used to removes the primary element with the desired value.
print(l)
l.remove('a')
print("After removing 'a' from list l:",l)

# pop() function is used to removes the element at a specific position.
l.pop(1)
print('After removing the element at index 1:',l)

# clear() function is used to remove all the elements of a list.
l.clear()
print('After using clear function on list l:',l)


