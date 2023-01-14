'''
TITLE : STRING IN PYTHON
OWNER : MOHD RAZA MOHD RAFIQUE
DATE  : 27/10/2022
'''

# String is the sequence of unicode characters wrapped insinde single,
# double, or triple quotes.

# single and double quotes are use for single line string.
s1 = 's1 is single line string in single quotes.'
s2 = "s2 is single line string in double quotes."
print(s1)
print(s2)

# Triple single/double quotes are use for multi line string and when
# we want to use single or double quotes as a part of string.

# multi line string.
s3 = '''
WELCOME TO MY CHANNEL.
LIKE,SHARE AND SUBSCRIBE.
s3 is multi line string in single quotes.
'''

s4 = """
If you see my codes are helpful
Please follow me on gitgub.
You can also follow me on youtube.
s4 is multi line string in double quotes.
"""
print(s3)
print(s4)

# string with single or double quotes.
s5 = ''' "s5" is string with 'single and double' quotes in single triple quotes. '''
s6 = """ "s6" is string with 'single and double' quotes in double triple quotes. """
print(s5)
print(s6)


'''
SLICING AND INDEXING IN STRING
Indexing is used to obtain individual elements of string.
Slicing is used to obtain a sequence of elements of string.
'''

s7 = 'HELLO GUYS WELCOME TO MY CHANNEL MR SQUARE'

'''
GENERAL FORM :: String Name [Start value:End value:Step/Interval]
Start value by default = 0
End value by default = length of string.
Step value by default = 1
'''

print("Printing character at a specific index")
print(s7[4])

print("Printing characters upto index 5.")
print(s7[0:6])

print("Printing complete string.")
print(s7[0:])

print("Printing characters with step value 2.")
print(s7[::2])

print("Printing reverse of string.")
print(s7[::-1])

print("Printing characters upto 5 index with step value 3.")
print(s7[:6:3])


# STRING AS A SUBSTRING OF ANOTHER STRING
print("SUBSTRING OF ANOTHER STRING")

s8 = input("Enter first string::")
s9 = input("Enter second string::")

# Now to check whether any string is substring of another string or not.
# We will use in operator.

if s8 in s9:
    print("First string is substring of second string.")
elif s9 in s8:
    print("Second string is substring of first string.")
else:
    print("Both strings are different.")

'''
NOTES :
1. In python strings are immutable.
'''

'''
ABOUT MY YOUTUBE CHANNEL
NAME : MR SQUARE
LINK : https://www.youtube.com/channel/UCFQ-C2iL9J9cbE0X1fawH_w
'''
