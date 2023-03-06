"""
If you can't sleep, just count sheep!!
Task:
Given a non-negative integer, 3 for example, return a string with a murmur: "1 sheep...2 sheep...3 sheep...". 
Input will always be valid, i.e. no negative integers.
"""

# def count_sheep(n):
#     if n == 0:
#         return ""
#     return f"{n} sheep..." + count_sheep(n-1)

def count_sheep(n):
    # your code
    if n:
        for i in range(1,n+1):
            print(f"{i} sheep... ",end="")
        

count_sheep(4)