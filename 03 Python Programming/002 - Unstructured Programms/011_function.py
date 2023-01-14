# Function in Python

'''
Function:
        It is a group of statements which perform a specific task.
        In general we use function for the purpose of reusing code which 
        follows DRY(Don't Repeat Yourself) priciple.
'''

# In python there are two types of functions.
# 1. Pre-defined: functions which are  defined by python itself, like print()
# 2. User-defined : fuunctions which are defined by user.
# we will see about user-defined functions.

# Let's see how to defined a function in python.

# To create/define a funcntion we use "def" keyword.

from shutil import register_unpack_format


def mr_square():
    print("Like,share and subscribe the channel")
    print("MR SQUARE")
# Here we are defining a function whose name is mr_square().
# Every commands(block of code) of a function starts after colon(:) and are indented
# In parenthesis () we write or give arguments if we need.

# Let's see how to use our function.
# We call our functios where we want to use them.
print("Let's call the function mr_square")
mr_square()
# NOTE: You can call a function only after difining it.

'''
Now let's see about argument of a function.
Argument:
        It is a value passed to a function(or method) when calling that function.
'''

# Let's see one example.
def fun(no):
    print(f"Your argument value is {no} ",end='\n\n')
# Here fun() function is taking one compolsury argument.
# means when we call this function we have to give a value to it.
# we are changing the by defalut value of end.

# let's call the fun() function.
print("We are calling fun() function with a numberic value")
fun(180)

# Let's see another example.
# We will difine a function whihc will findout square of argument value.
def Squar(no):
    print(f"Square of {no} is {no**2} ",end='\n\n')

num = int(input('Enter a number whose square have to find::'))
Squar(num)

# You can give n number of arguments to a function.
# Let's see  a function with 2 arguments.
def doSum(a,b):
    print(f"Sum of {a} and {b} is {a+b}",end='\n\n')

print("Adding two numbers given by user.")
no1 = int(input('enter first number:'))
no2 = int(input('enter second number:'))
doSum(no1,no2)


# You can also take other type of arguments like string,floats etc.
def Greet(name):
    print(f"Hello {name},welcome to my video.",end='\n\n')

print("Taking string as a argument value.")
name = input('ente your name::')
Greet(name)

# Returning from a function.
'''
Sometimes we want to use a value calculated by a function, outside the function
then we use return statement.
let's see one example.
'''

def findMax(a,b):
    # This function is for finding maximum of two numbers.
    if a>=b:
        return a
    else:
        return b

print("finding maximum of two numbers given by user.")
no1 = int(input('ente first number:'))
no2 = int(input('enter second number:'))
ans = findMax(no1,no2)
print(f'The greates number is {ans} ',end='\n\n')

# NOTE: Once you return a value from a function, any code after the return statement
#       will never happen i.e will never execute.