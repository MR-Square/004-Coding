# In this program we will see the simple sorting algorithm

def sort_array(a):
    for i in range(len(a)):
        for j in range(i+1,len(a)):
            if a[j] < a[i]:
                temp = a[i]
                a[i] = a[j]
                a[j] = temp
    return a

if __name__ == '__main__':
    arr = list(map(int,input('enter the elements::').split()))
    ans = sort_array(arr)
    print(ans)