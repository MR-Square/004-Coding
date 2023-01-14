/*

.                        Implementation of queue using array:
.                                                             Name: SHAIKH MOHD RAZA MOHD RAFIQUE
.                                                          Roll No: 20CO53
.                                                     Acadmic Year: 2020-21
                                            
            A queue can be defined as an ordered list which enables insert operations to be performed 
            at one end called REAR and delete operations to be performed at another end called FRONT.
            2. Queue is referred to be as First In First Out list.
            3. For example, people waiting in line for a rail ticket form a queue.
            Application :
            1.Due to the fact that queue performs actions on first in first out basis which is quite 
            fair for the ordering of actions. There are various applications of queues discussed as below.
            2.Queues are widely used as waiting lists for a single shared resource like printer, disk, CPU.
            3.Queues are used in asynchronous transfer of data (where data is not being transferred at the 
            same rate between two processes) for eg. pipes, file IO, sockets.
            4.Queues are used as buffers in most of the applications like MP3 media player, CD player, etc.
            5.Queue are used to maintain the play list in media players in order to add and remove the 
            songs from the play-list.
            6.Queues are used in operating systems for handling interrupts.
*/
#include<stdio.h>
#include<stdlib.h>
#define Max 5
struct queue
{
    int data[Max];
    int front,rear;
};
void initialize(struct queue*q)
{
    q->front=q->rear=-1;
}
int isEmpty(struct queue *q)
{
    if(q->rear==-1)
    return 1;
    else 
    return 0;
}
int isFull(struct queue *q)
{
    if(q->rear==Max-1)
    return 1;
    else
    return 0;
}
void insert(struct queue *q,int d)
{
    if(isFull(q))
    printf("\nQueue is full..");
    else
    {
     q->rear++;
     q->data[q->rear]=d;
     if(q->front==-1)
     q->front=0;
     printf("\n Successfully inserted..");   
    }
}
void delete(struct queue *q)
{
    if(isEmpty(q))
    printf("\n Queue is empty ");
    else{
        printf("deleted elememt is %d",q->data[q->front]);
        if(q->front==q->rear)
        q->front=q->rear=-1;
        else
        q->front++;
    }
}
void display(struct queue *q)
{
    if(isEmpty(q)==1)
    printf("\nQueue is empty");
    else{
        printf("\n Queue content:\nFront=%d\tRear=%d",q->front,q->rear);
        for(int i=q->front;i<=q->rear;i++)
        printf("\n %d",q->data[i]);
    }
}
int main()
{
    struct queue q;
    int i,ch,d;
    while(1)
    {
        printf("\n\n\tMENU\n");
        printf("1.Initialize.\n");
        printf("2.Insert\n");
        printf("3.Delete\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("\t\tEnter Your Choise:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                initialize(&q);
                break;
      
            case 2:
                printf("\nEnter data");
                scanf("%d",&d);
                insert(&q,d);
                break;
      
            case 3:
                delete(&q);
                break;
      
            case 4:
                display(&q);
                break;
      
            case 5:
                exit(0);
                break;
            default:
                printf("invalid choice");
                break;
        }
    }
        return 0;
}





/*
Conclution:
.            In this programme we have implemented queue using array in this we have 2 
.            ends front end and rear end from which we are inserting and deleting the data.We have use 
.            the funtions such as isfull is empty to check whether our queue is empty or full and other 
.            functions such as insert(to insert data),delete function,display function ands intialize function
.            provides its intial value at the time of construction 
Output:
               Menu.
1. initialize.
2.insert
3.delete
4Display
5exit.
        Enter your choice::4

 Queue content:
Front=0 Rear=2
 3
 4
 5
*/

