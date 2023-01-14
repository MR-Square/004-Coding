import socket

def server_prog():
    host = socket.gethostname()
    port = 5000

    sr = socket.socket()
    sr.bind((host,port))

    sr.listen(2)
    print('Listening...')

    conn, add = sr.accept()
    print("Connection established")
    print(add)

    try:
        while 1:
            data = input('enter the data::')
            conn.send(data.encode())

            print("Rec:: ",conn.recv(1024).decode())

    except:
        print("Connectio Failed")


if __name__ == '__main__':
    server_prog()