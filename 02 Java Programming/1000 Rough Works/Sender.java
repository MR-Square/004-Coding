import java.io.*;
import java.net.*;

public class Sender{
    Socket sender;
    ObjectOutputStream out;
    ObjectInputStream in;
    String packet,ack,str,msg;
    int no,i=0,sequence=0;

    Sender(){}

    public void run(){
        do{
            BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        }while(true);
    }
}