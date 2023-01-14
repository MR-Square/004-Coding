# String Functions

# In this program we will see different string functions in python.

# len() function is used to find out the length of a string.
str = "hello guys, welcome to my channel mr square."
length = len(str)
print("Length of str = ",length,"\n")

# .capitalize() function is used to convert the first character to upper case.
capital = str.capitalize()
print("After using .capitalize function\n",capital,"\n")

# .upper() function is used to convert a string into upper case.
upper = str.upper()
print("After using .upper function\n",upper,"\n")

# .casefold() function is used to convert the string into lower case.
str = "LIKE,SHARE AND SUBSCRIBE THE CHANNEL"
lower = str.casefold()
print("After using .casefold function\n",lower,"\n")

# .count() function is used to find how many times a specified value occur in a string.
count = str.count("E")
print("Number of E in str=",count,"\n")

#.find() function is used to return the position of a value in string.
# if it will return -1 then it means that value is not in string.
str = " my channel is mr square"
find = str.find("mr")
print(str)
print("Does str contain 'mr' ",find,"\n")

# .format() function is used to formats the specifed value and insert them
# inside the string's placeholder.
str = "You scored {:.0%}."
print(str.format(.50),"\n")

# .split() function is used to splits the string at the specified separator
# and returns a list.
str = "Like,share,subscribe"
split = str.split(",")
print("After using .split function\n",split,"\n")

# startwith() function is used to returns true if the string starts with the
# specified value.
str = "Hello, welcome to my channel."
x = str.startswith("Hello")
print("After using .startwith function\n",x,"\n")

# .endwith() function is used to return true if the string end with the
# specified value.
str = "welcome to my channel mr square"
endwith1 = str.endswith("are")
endwith2 = str.endswith("xyz")
print(str)
print("Does str end with 'are' ",endwith1)
print("Does str end with 'xyz' ",endwith2)