# In this program we will see about loops in python
'''
Loops are use to execute a line of code or block of code multiple times.
In python there are two types of loops.
1. for loop
2. while loop
'''

# for loop:
# we use for loop when we know that how many times we want to execute block of code.
# let's see example of for loops.

l = ['a','b','c','d']

for i in range(4):
    print(l[i],end=" ")
print()
# Here i variable is working as a indeces of list l.The value of i will be from 0 to 3.
# It means we can itrate in a list or string using for loop.

# NOTE: At the time of using loops, use the indentation carefully.

# We can also give the elements as a value to i variable in for loop.
for i in l:
    print(i,end=" ")
print()

# Let's see another example in which we will itrate in string.
str = "MRSQUARE"
for x in str:
    print(x,end=" ")
print()

# Break statement in for loop:
# break statement is used to terminate the loop at a specific value even loop is
# not completed.
# let's see one example.
for i in range(11):
    if i==6:
        break
    print(i,end=" ")
print()
# As we have used if statement before printing the value of i variable,so it will
# print the numbers from 0 to 5 only.

# let's see another example.
str = 'abcdefg'
for i in str:
    print(i,end=" ")
    if i=='e':
        break
print()
# As we have used if statement after printing the value of i variable,so it
# will print upto e then loop will terminate.

# Continue statement in for loop:
# it is used to stop the current iteration of loop.But it will not terminate the
# loop.
for i in range(11):
    if i==4 or i==7:
        continue
    print(i,end=" ")
print()
# The above for loop will print all the numbers from 0 to 10 except 4 and 7.


# while loop
# while loop is used to run the block of code multiple times unless and untill condition
# become false.
# Means we use while loop when we don't know that how many times we want to run the code.

# First let's see basic example of while loop.
i = 1
while i<7:
    print(i,end=" ")
    i= i+1
print()
# when you are using while loop then don't forget to increament/decreament the value of
# variable otherwise your loop will run infinitely times.

# let's see another example of while loop.
no = 0 
while no != 5:
    no = int(input('Enter a integer:'))
    print(no)

# The above while loop run unless the user enter 5 as a input value.
# Here we don't know that how many times this loop will run.We only know that
# if user enter 5 then only this loop will terminate.

# We can not itrate in a string or list using while loop.

# Break statement in while loop:
# break statement is used to stop(terminate) the while loop even the condition is true.
i = 0
while i<10:
    if i==7:
        break
    print(i,end=" ")
    i +=1
print()
# As we have used if statement first , so this loop will print the numbers upto 6.

# Continue statement:
# continue statement is used to stop the current iteration but not the loop.

i = 10
while i>1:
    if i==4:
        i= i-1
        continue
    print(i,end=" ")
    i -=1
print()
# The above loop will print the numbers from 10 to 2 except 4.

# NOTE: when you are using continue in while loop then change the value of variable
# first then use continue statement, otherwise it will run infinitely.