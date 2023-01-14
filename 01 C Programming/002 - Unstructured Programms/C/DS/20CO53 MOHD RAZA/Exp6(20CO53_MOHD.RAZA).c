/*
	Exp No.06: Array implementaion of Circular Queue.
	
.											@SHAIKH MOHD RAZA MOHD RAFIQUE
.											Roll No: 20CO53
.											Acadmic Year: 2021-22
.		In this experiment I have made a circular queue in which you can insert or
delete the element.You can also check whether the C.Queue is empty or not and full 
or not.Circular queue is a advanced virsion of linear queue.	
*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int arr[MAX];
int f=-1,r=-1;	// Here we can also take  f=0 and r=0 

int isFull()
{
    if(r==MAX-1)
    return 1;
    else 
    return 0;
}

int isEmpty()
{
    if(f==r)
    /*
    AYSA BHI TO HO SAKTA HAI KI SAB ELEMENTS ENQUEUE KARNE K BAAD FRONT AND REAR 
    KI VALUE EQUAL HO JAE GI.TAB TO STACK FULL HO GA NA.
    */
    return 1;
    else 
    return 0;
}

void allElement()
{
	int i;
    for( i=(f+1);i<=r;i++)
    {
        printf("%d\t",arr[i]);
    }
}
void enqueue()
{
    if(isFull())
    printf("QUEUE IS FULL");
    else 
    {
        r= (r+1) % MAX;
        printf("Enter the element::");
        scanf("%d",&arr[r]);
        return;
    }

}

int  dequeue()
{
    if(isEmpty())
    printf("QUEUE is empthy");
    else 
    {
        int deleted_value;
        f = (f+1) % MAX;
        deleted_value = arr[f]; // Here can I directly write arr[(f+1)%MAX] or not.
        return deleted_value;  // can I directly write return arr[(f+1)%MAX] or not.
    }
}

void main ()
{
    int no,a,full,empty;
    while (1)
    {
        printf("\n1.ENQUEUE\n");
        printf("2.DEQUEUE\n");
        printf("3.isFull\n");
        printf("4.isEmpty\n");
        printf("5. All Element\n");
        printf("6. EXIT\n");
        printf("\tEnter no::");
        scanf("%d",&no);
        switch(no)
        {
            case 1:
                enqueue();
                break;
            case 2:
                a=dequeue();
                printf("%d is deleted",a);
                break;
            case 3:
               full=isFull();
            if(full==1)
            printf("Queue is full");
            else 
            printf("Queue is not full");
            break;
            case 4:
               empty=isEmpty();
            if(empty==1)
            printf("Queue is empty");
            else 
            printf("Queue is not empty");
            break;
            case 5:
                allElement();
                break;
            default:
                printf("You entered wrong no.");
            case 6:
            	exit(1);
        }
    }
    
}

/*
CONCLUSION:
.		It is easy to use.It saves the memory.We can use the memory after dequeue.
*/

/*
OUTPUT:
		
1.ENQUEUE
2.DEQUEUE
3.isFull
4.isEmpty
5. All Element
6. EXIT
        Enter no::1
Enter the element::19

1.ENQUEUE
2.DEQUEUE
3.isFull
4.isEmpty
5. All Element
6. EXIT
        Enter no::1
Enter the element::100

1.ENQUEUE
2.DEQUEUE
3.isFull
4.isEmpty
5. All Element
6. EXIT
        Enter no::2
19 is deleted
1.ENQUEUE
2.DEQUEUE
3.isFull
4.isEmpty
5. All Element
6. EXIT
        Enter no::4
Queue is not empty
1.ENQUEUE
2.DEQUEUE
3.isFull
4.isEmpty
5. All Element
6. EXIT
        Enter no::6

*/
