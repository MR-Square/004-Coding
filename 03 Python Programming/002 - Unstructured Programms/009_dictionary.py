# dictionary in python

# In this program we will see about dictionary and its methods.

'''
Dictionary:
        A dictionary can be defined as a collection of items in key-value pair
        of similar or different data types.
'''

# There are two ways to declare an empty dictionary.
d1 = {}     # first way.
d2 = dict() # second way.
print(f"d1 is a object of {type(d1)}")
print(f"d2 is object of {type(d2)} ")

# In python dictionary is mutable means we can modify it after creating it.
d1 = {1:'a',2:'b',3:'c',4:'d'}
print(f"Dictionary d1:\n{d1} ")

# Now we will see how to add key and value in dictionary.
d1[5] = 'e'
# here in square bracket 5 is key and its value is right side of equal i.e 'e'
print(f"After adding key-value in dict d1:\n{d1} ")

# Now let's take another key and vlaue from user.
key  =input('Enter the key:')
value = input('Enter the value:')
d1[key] = value
# Here key variable is for storing key of dictionary
# vlaue variable is for storing value of that key.
print(f"After adding key-value form user in deictionary d1:\n{d1} ")

# If user enter a key which is already persent in dictionary then the old
# value of that key will be overrided by new value.
key = input("Enter the same key please:")
value = input("Enter the new value :")
d1[key] = value
print(f"Dictionary d1:\n {d1} ")

# Now let's see how to delete any key value pair from dictionary.
# we will delete the key value given by user.
del d1[key]
print(f"Aftre deleting the key-value given by user from dict d1:\n{d1}")

# In dictionary you can add any type of key or value.
d2 = {
    'key1':'value1',
    2 : 25,
    'key3':3,
    4: 'value4',
    5: [1,2,3],
    'key6':{'a',1},
    7:(1,'a')
}
print()
print(f"Dictionary d2:\n{d2}")
print()

# Methods for dictionary in python.
print("Methods of dictionary in python")

# key() method is used to return a list containing the dictionary's keys.
x = d1.keys()
print(f"Keys of dictionary d1 are:\n{x}")
print()

# values() method is used to return a list containing the deictionary's values.
x = d1.values()
print(f"Values of dictionary d1 are:\n{x} ")
print()

# items() method is used to return a list containing a tuple for each key-value.
x = d1.items()
print(f"Pairs of key-value of dictionary d1 are:\n {x} ")
print()

# .get() method is used to return the value of the item with the specified key.
x = d1.get(1)
print(f"Value of key 1 in dictionary d1 is {x}")
y = d1.get(10)
print(f"Value of key 10 in dictionary d1 is {y}")
print()

# popitem() method is used to remove the last key-value pair.
x = d1.popitem()
print(f"After removing the last element from dictionary d1:\n{x} ")
print()

# pop() method is used to remove the element with the specified key.
d1.pop(4)
print(f"After removing the element with key value as 4:\n{d1} ")
print()

# clear() method is used to remove all the elements form the dictionary.
d1.clear()
print(f"After clearing all the elements form dictionary d1:\n{d1} ")

