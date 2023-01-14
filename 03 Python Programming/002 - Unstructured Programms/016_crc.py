def xor(a,b):
    result=[]
    for i in range(1,len(b)):
        if a[i]==b[i]:
            result.append('1')
        else:
            result.append('0')
    
    return ''.join(result)

def crc(message,key):
    
    pick=len(key)
    
    tmp=message[:pick]
    
    while pick<len(message):
        if tmp[0]=='1':
            tmp=xor(key,tmp)+message[pick]
        else:
            tmp=xor('0'*pick,tmp)+message[pick]
        pick+=1
        
    if tmp[0]=='1':
        tmp=xor(key,tmp)
    else:
        tmp=xor('0'*pick,tmp)
    checkword = tmp
    return checkword

def check_data(data,key):
    
    l_key=len(key)
    append_dt=data+'0'*(l_key-1)
    rem=crc(append_dt,key)
    cdword=data+rem
    cdw=''
    cdw+=cdword
    print("Checkword:-", rem)
    print("Data:-", cdword)
    print("==========================================")
    print("Data received on receiver side:-", cdw )
    
    
    rem=crc(cdw,key)
    print(rem)
    if rem==('0'*(len(key)-1)):
        print("Data is correct")
        
    else:
        print("Data is corrupted", )

    
        
if __name__=="__main__":
    data=input("Enter the Data in binary:-")
    key=input("Enter the key in binary:-")
    check_data(data,key)
    
