# It's pretty straightforward. Your goal is to create a function that removes the first and last characters of a string.
# You're given one parameter, the original string. You don't have to worry with strings with less than two characters.


def remove_char(s):
    # s = ""
    # return s[1:len(s)-1]    # by me
    return s[1:-1]          # by other


if __name__ == '__main__':
    s = input('enter your string::')
    print(remove_char(s))