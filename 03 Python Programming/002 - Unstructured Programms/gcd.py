def gcd(a,b):
    return b if not a else gcd(b%a,a)

if __name__ == '__main__':
    myNumbers = list(map(int,input('enter two numbers::').split()))
    print(gcd(myNumbers[0],myNumbers[1]))
