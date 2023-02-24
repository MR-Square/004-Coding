# Checking whether the given number is even or odd
def even_or_odd(number):
  return ["Even", "Odd"][number % 2]

if __name__ == '__main__':
    no = int(input('Enter a number:'))
    ans = even_or_odd(no)
    print("Number is ",ans)