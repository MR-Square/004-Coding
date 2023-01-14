/*
 Queue It is a linear data structure in which insertion is done fromk one end and deletion is done from another end.
 The end from which insertion is done is called the rear end.
 The end from which deletion is done is called the front end.
*/

/*
Queue ADT:
DATA: A finite sequence of elements of any particular type.
OPRATION:
1. Initialization.
2.Check whether it is empty.
3.Check whether it is frll.
4. Insert an element from the rear of a queue if it is not full.
Sometime referred as enqueue.
5. Delete an element from the front of a queue if it is not empty.
Somtime referred as dequeue.
*/

/*
Implemetation of queue using array
*/
#include<stdio.h>
#define MAX 5

struct queue
{
    int data[MAX];
    int front,rear;
};

void initialize(struct queue *q)
{
    q->front=q->rear=-1;   
}

int isEmpty(struct queue *q)
{
    if (q->rear==-1)
        return 1;
    else 
    return 0;
}