# File Handling
import os
'''
File handling is nothing but doing different operations on file using a program.
By using file handling we can create,read,update and delete files using program.
One of the very important use of it is when we are working on web application.
'''

# OPENING AND CLOSING A FILE
'''
To open a file we use open() function
syntax: open("fileName.txt","mode")

There are few different modes for opening a file.
r   -   open file in read mode.Default mode
w   -   open file in write mode.
a   -   open file in append mode.
t   -   open file in text mode.Default mode
b   -   open file in binary mode.
+   -   open file in read and write mode.
x   -   creating new file if not exists.

a and w modes will also create file if file does not exists.
r mode will give error if file does not exists.
x mode will give error if file exists.
'''

# As read mode is by default mode,so we don't need to menstion it if we 
# are opening file in that mode.
g = open("testing.txt")
# the above file will open in read mode.

# Now let's open same file in read binary mode.
f = open("testing.txt","rb")
# NOTE: the above file is present in the same folder where program is present.

# Opening file which is present in another location.
f = open("E:\\test\\test.txt")

# You can also use single backslash but double backslash is preferred.

# If you are using single backslash then use "r" keyword as well.
f = open(r"E:\test\test.txt")

# NOTE: Whenever you open a file don't forget to close it.
f.close()
g.close()

# There is another way also available for opening and closing file.
with open("testing.txt","rt") as f:
    print(f.read())
# while using with statement you don't need to use close(),but use the indentation
# carefully.

#   CREATING AND UPDATING A FILE
# If you want to create a new file then use "x" mode.
f = open("xyz.txt","x")
# this will create a file which name will be xyz.txt

# The w and a modes are used to write and append existing file.
# If that file is not available then it will create automatically.

# Let's write something in xyz file.
with open("xyz.txt","w") as f:
    f.write("How is the video.\nIf you want to learn C or Python then check out my channel.")

# w mode overwrites the existing data of file.Means if file contains any data and you
# open it in w mode and writing something then previous data will be overwrited by
# new one.

# If you want to keep the previous data also and want to write something in the last
# of that data then use "a" mode.
with open("xyz.txt","a") as f:
    f.write("\nAs we are opening file in a mode,the previous data will not delete")


# READING A FILE.
# After creating a file and writing something in it,if you want to see that
# data then we read that file and print it.

# To read a file we use .read() function.It will only read the file not print the file.

with open("testing.txt","rt") as f:
    data = f.read()
    print(data)
# you can also direct print f.read()

# You can also read some part of file.
with open("E:\\test\\test.txt") as f:
    print(f.read(5))
# This will read and print only first 5 characters of file.
# If you will read again then it will read after that 5th character.
    print(f.read(10))

# You can also read a file line by line.
with open("xyz.txt") as f:
    print(f.readline())
# This will read  only single line of file.

# DELETING A FILE
# You can delete a file if and only if it exists,otherwise you may get error.
# To delete a file we use .remove() function of os module.
if os.path.exists("xyz.txt"):
    os.remove("xyz.txt")
    print("file is deleted successfully")
else:
    print("The file does not exist.")

# SOME BASIC FUNCTIONS FOR FILE HANDLING.

# .tell() function is used to find out the position of pointer.
with open("testing.txt") as f:
    f.readline()
    print("position of pointer is ",f.tell())

# .seek() function is used to change the position of pointer.
with open("testing.txt") as f:
    f.readline()
    print("The position of pointer is ",f.tell())
    f.seek(10)
    print("After using .seek function position of pointer is ",f.tell())

f = open("testing.txt","w")

# .closed is used to check whether a file is closed or not.
# it will returns true if file is closed,otherwise false.
print("Is testing file closed: ",f.closed)

# .mode is used to check in which mode file is open.
print("In which mode testing file is open: ",f.mode)

# .name is used t returns the name of file.
print("Name of the file is ",f.name)
f.close()


# Let's see how to find the number of lines and characters in a file.
with open("abc.txt") as f:
    lines = sum(1 for line in f)
    print(f"Number of lines in file is {lines} ")
    f.seek(0)
    data = f.read()
    print(f"Number of characters in file is {len(data)} ")
    