/*
    INTRO:-
        QUEUE:
.             A queue is a structure in which whatever goes in first,comes out first (FIFO).
.              In queue insertion is done from one end which is called rear/tail of queue. 
.              In queue deleting is done from another end which is called front/head of queue.
.       OPERATIONS:
.              1- Insertion is called Enqueue/Push Operation.
.                 An element is inserted in queue from rear end.
.              2- Deletion is called Dequeue/Pop Operation.
.                 An element is deleted in queue from front end.
.              3- To look at the element at the head is done by Front/Peek function.
.                 This operation check only element not delete the element.
.              4- To check whether queue is empty or not IsEmpty is used.
        APPLICATION:
                1. Printer queue.
                2. Process scheduling.
                3. Simulating wait.
*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int front =-1;
int rear =-1;
int arr[MAX];

int isFull()
{
        if(rear== MAX -1 && front == 0)
        return 1;
        else 
        return 0;
}

int isEmpty()
{
        if(front==-1 && rear ==-1)
        return 1;
        else
        return 0;
}

void Enqueue()
{
        int element;
        if(front==0 && rear== MAX-1)
        {
                printf("Queue is full");
                return;
        }
        else 
        {
                if(front==-1 && rear==-1)
                front++;
        }
        rear++;
        printf("Enter the element:");
        scanf("%d",&element);
        arr[rear]=element;
        printf("Front = %d\n",front);
        printf("Rear = %d\n",rear);
        return;
}
void Display()
{
        for (int i = 0; i <= rear; i++)
        {
                printf("%d\t",arr[i]);
        }
        
}

void main ()
{
        int no;
        int isfull,isempty;
        while(1) 
        {
                printf("\n\tMenu\n");
		printf(" ----------------------\n");
                printf("|  1  |   ENQUEUE      |\n");
                printf(" ----------------------\n");
	        printf(" ----------------------\n");
                printf("|  2  |   DEQUEUE      |\n");
                printf(" ----------------------\n");
		printf(" ----------------------\n");
                printf("|  3  |   IsFULL       |\n");
                printf(" ----------------------\n");
		printf(" ----------------------\n");
                printf("|  4  |   IsEMPTY      |\n");
                printf(" ----------------------\n");
		printf(" ----------------------\n");
                printf("|  5  |   ALL ELEMENT  |\n");
                printf(" ----------------------\n");
		printf(" ----------------------\n");
                printf("|  6  |   QUIT         |\n");
                printf(" ----------------------\n");
	        printf("\t\t\tEnter the number please::");
                scanf("%d",&no);
                switch (no)
                {
                        case 4:
                                isempty=isEmpty();
                                if(isempty==1)
                                printf("Queue is EMPTY\n");
                                if(isempty==0)
                                printf("Queue is NOT Empty\n");
                                break;
                        case 3:
                                isfull=isFull();
                                if(isfull==1)
                                printf("Queue is FULL\n");
                                if(isfull==0)
                                printf("Queue is NOT FULL\n");
                                break;
                        case 1:
                                Enqueue();
                                break;
                        // case 2:
                        //         Dequeue();
                        //         break;
                        case 5:
                                Display();
                                break;
                }
        }
}


















