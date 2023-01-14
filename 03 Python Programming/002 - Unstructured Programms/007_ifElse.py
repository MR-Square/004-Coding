# class by percentage using if-else in Python

# In this program we will take the percentage of student from user and will print
# the class like distinction, fist or second etc.

# Now let's take the percentage from user and store it in a variable.
per = float(input("Enter your percentage::"))
# As we know input are always in string type se we are converting it into float 
# type because percentage may floating number.

# If percentage is between 75% to 100% then student is passed with distinction.
if per>=75 and per<=100:
    print('You are passed with DISTINCTION\n')

# If percentage is more than 60% but less than 75% then student is passed with 
# first class.
else:
    if per>=60 and per<75:
        print('You are passed with FIRST CLASS\n')

# If percentage is more than 40% but less than 60% then student is passed with 
# second class. In python insted of else-if we can direct use elif.
    elif per>=40 and per<60:
        print('You are passed with SECOND CLASS\n')

# If percentage is less than 40% than student is fail.
    elif per>=0 and per<40:
        print('You are FAILED\n')
    else :
        print('You entered wrong percentage.')