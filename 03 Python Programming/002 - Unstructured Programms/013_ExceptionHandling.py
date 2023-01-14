# Exception Handling in python

'''
Exception handling is a way to handle the exceptions so that the code can be executed
without any interruption. If we don't handle the exception, the interpreter does not
execute all the code that exists after that exception.
'''

'''
There are mainly four blocks used in exception handling which are as follow:
try - This block is used to test a block of code for exception.
except- This block lets you handle the exception.
else - This block is used when there is no exception.
finally - This block is used when we have some line of code which have to execute.

There are some most seen exception let's see them.

1) Syntax error:
This occurs when we write wrong syntax in our program.
example:
x,y = 4,5
if x > y:
    print('x is greater')
    else:
        print('y is greater')


2) Indentation Error:
It occurs when we don't give proper indentation in our program.
example:
name = 'MR SQUARE'
if name == 'MR SQUARE':
print('same')
else:
    print('not same')
'''

# 3) Name Error:
# It occurs when we write wrong spelling of build in functions.
# example:
try:
    print('The following block of code will generate name error:')
    x,y = 4,5
    if x > y:
        prin('x is greater')
    else:
        print('y is greater')

except NameError as n:
    print(n)

# It is mandatory for us to use at least one except/finally block if we are using 
# try block.

try:
    x = '''
    If you are using try, except and else blocks then,
    else block will execute only when if there is no 
    exception occurs.
    '''
    print(x)

except Exception as e:
    print('Exception is the main class of all types of exceptions.')
    print(e)

else:
    print('As there is no exception in try block,so else block is executed.')


# 4) Zero Division Error:
# It occurs when we divide any number by zero.
# example:
try:
    print('The following block of code will generate zero-division error:')
    y = 5/0
    print(y)

except ZeroDivisionError as z:
    print(z)
# This except will catch only zerDivision error if another exception occurs 
# it will not catch.If you don't know which type of exception may occurs in your
# code then use Exception class.

# you can also use as many except as you want.
except NameError as n:
    print(n)

# 5) Type Error:
# It occurs when we give inappropriate argument type to operation.
# example:
try:
    a =  'some'
    b = 2
    print(a+b)
    # we can not concatinate string with integer.
except Exception as e:
    print(e)

# Now let's see some another exampls.

# If you are using finally block then it will execute always.
try:
    x = '''
    If there are multiples exception in our code then we will 
    get only first exception as after getting first exception
    program will jump on except block.We will get second 
    exception untill we resolve first exception.
    '''
    print(x)
    print(2/0)
    prin('this is another type of exception')

except ZeroDivisionError as z:
    print(z)
except TypeError as t:
    print(t)
except Exception as e:
    print(e)

else:
    print('As except block will execute,so else block will not execute.')

finally:
    print('finally block will always execute if you are using it.')
    print('Like,share and subscribe to my channel "MR SQUARE".')


# Now we will see how to call or generate exception.
# To call any exception we use raise keyword.
try:
    no = int(input('Enter a positive integer:'))
    if no > 0:
        print(f'You entered {no}.')
    else:
        raise ValueError

except Exception as e:
    print('You entered wrong input.')

else:
    print('code is executed successfully.')

finally:
    print('Done')
    
