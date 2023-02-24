# Generating the table of a number "x" upto "n"
def count_by(x, n):
    return list(range(x, n * x + 1, x))

if __name__ == '__main__':
    # no = int(input('enter the number:'))
    no = list(map(int,input('enter the numbers:').split()))
    ansList = count_by(no[0],no[1])
    print(ansList)