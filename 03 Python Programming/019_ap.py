def arithmetic_sequence_elements(a, d, n):
    s = str(a)
    for i in range(n-1):
        print(i)
        a = a + d
        s = s + ", " + str(a)
        print(s)
        print()
    return s

print(arithmetic_sequence_elements(1,2,5))