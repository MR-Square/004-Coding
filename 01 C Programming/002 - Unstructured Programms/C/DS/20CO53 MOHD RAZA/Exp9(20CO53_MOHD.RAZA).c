/*
.			Exp No.09:Implementation of Queue using linked list.
.
.											        @SHAIKH MOHD RAZA MOHD RAFIQUE
.													Roll No: 20CO53
.													Acadmic Year: 2021-22

Theory about the programme:-In the linked queue, there are two pointers maintained 
in the memory i.e. front pointer and rear pointer. The front pointer contains the 
address of the starting element of the queue while the rear pointer contains the 
address of the last element of the queue.Insertion and deletions are performed at 
rear and front end respectively. If front and rear both are NULL, it indicates that
the queue is empty.
*/

#include<stdio.h>
#include<stdlib.h>

struct node             // self referential structure
{
    int data;       // struct student data;
    struct node *next;      
};

struct queue
{
struct node *front;
struct node *rear;
};

struct queue *insert(struct queue *q, int d)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    if(p==NULL)
    {
        printf("\nQueue is full...");
    }
    else
    {
        p->data=d;
        p->next=NULL;
        if(q->front==NULL)     
            q->front=p;        // queue is empty so new node becomes first node
        else
        q->rear->next=p;//queue is not empty so new node becomes next node of last node.
        q->rear=p;              // new node becomes last node.
    }
    return q;
}

struct queue *delete(struct queue *q)
{
    struct node *tmp;
    if(q->front==NULL || q->rear==NULL)
        printf("\nQueue is Empty.");
    else
    {
        tmp=q->front;
        q->front=q->front->next;
        if(q->front==NULL)
            q->rear=NULL;
        printf("\nNode with data %d Removed.",tmp->data);
        free(tmp);
        
    }
    return q;
}

void display(struct queue *q)
{
    struct node *tmp;
    if(q->front==NULL)
        printf("\nQueue is empty.");
    else{
        tmp=q->front;
        printf("\nQueue Content :");
        while(tmp!=NULL)
        {
            printf("\t%d",tmp->data);
            tmp=tmp->next;
        }
    }
}

int main()
{
    struct queue *q;
    int ch,el,k;
           
    q=(struct queue *)malloc(sizeof(struct queue));
    q->front=q->rear=NULL;          //initialization of queue
    while(1)
    {
        printf("\n\n\t\t\tMENU\n1. Insert.\n2. Delete.\n3. Display.\n4. Exit.");
        printf("\n\tEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\nEnter the data : ");
            scanf("%d",&el);
            q=insert(q,el);
            break;
            case 2:
            q=delete(q);
            break;
            case 3:
            display(q);
            break;
            case 4:
            exit(0);
            break;
            default:
            printf("\nPlease enter correct choice...");
        }
    }
    return 0;
}


/*
Conclution:I understood that how we can implement queue using linked list
           and how it is different from queue using array.

Output:              MENU
1. Insert.
2. Delete.
3. Display.
4. Exit.
        Enter your choice :


*/
