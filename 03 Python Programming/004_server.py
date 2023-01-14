'''
TITLE : PROGRAME FOR SERVER
OWMER : MOHD RAZA MOHD RAFIQUE SHAIKH
DATE  : 31/10/2022

Description:This program we will recieve the data to client program.
'''

import socket

def server_prog():
    host = socket.gethostname()
    port = 5000

    sr_socket = socket.socket()
    sr_socket.bind((host,port))

    sr_socket.listen(1)
    print("Listening...")
    try:
        conn, add = sr_socket.accept()
        print("Connection from: "+ str(add))

        while 1:
            data = conn.recv(1024).decode()

            if not data:
                break

            print("Print Data:: " + str(data))

        conn.close()
    
    except:
        print("Connection Failed")


if __name__ == '__main__':
    server_prog()



'''
ABOUT MY YOUTUBE CHANNEL
NAME : MR SQUARE
LINK : https://www.youtube.com/channel/UCFQ-C2iL9J9cbE0X1fawH_w
'''