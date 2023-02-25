# Complete the solution so that it reverses all of the words within the string passed in.
# Words are separated by exactly one space and there are no leading or trailing spaces.
# e.g: i/p -> I am coder ; o/p -> coder am I

def reverse_words(s):
    # print(type(s.split()))
    # .split() method divides the string based on argument and store them in a list
    return ' '.join(s.split()[::-1])


if __name__ == '__main__':
    s = input('enter your string::')
    print(reverse_words(s))