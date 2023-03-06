def arithmetic_sequence_elements(a, d, n):
    s = str(a)
    for i in range(n-1):
        a = a + d
        s = s + ", " + str(a)

    return s
    # return ", ".join(f"{a + i*d}" for i in range(n))    # by others

print(arithmetic_sequence_elements(1,2,5))