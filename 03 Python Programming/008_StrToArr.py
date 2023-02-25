# Convert a string to an array.

def string_to_array(s):
    return list(s.split()) or ['']

if __name__ == '__main__':
    s = input('enter a staring:')
    # print(bool(s.split()))
    print(string_to_array(s))