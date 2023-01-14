'''
TITLE : PROGRAME FOR CLIENT
OWMER : MOHD RAZA MOHD RAFIQUE SHAIKH
DATE  : 31/10/2022

Description:This program we will send the data to server program.
'''

import socket

def client_prog():
    host = socket.gethostname()
    port = 5000
    client_sc = socket.socket()

    try:
        client_sc.connect((host,port))

        while 1:
            msg = input('Enter the input:: ')
            client_sc.send(msg.encode())

            if "END" in msg:
                client_sc.close()
                print("Connection Closed")
                break

    
    except:
        print("Connection Failed")


if __name__ == '__main__':
    client_prog()


'''
ABOUT MY YOUTUBE CHANNEL
NAME : MR SQUARE
LINK : https://www.youtube.com/channel/UCFQ-C2iL9J9cbE0X1fawH_w
'''