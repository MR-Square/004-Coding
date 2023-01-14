/*
.                           Implementation of Stack using Array
.                                                       @ SHAIKH MOHD RAZA MOHD RAFIQUE,
.                                                       RollNo. 20CO53
.                                                       Academic Year. 2021-22
.               Stack is a linear data structure in which the data is inserted and deleted from the same end.This 
.			end is often called as top of stack.In stack the last added element is removed first.Stack follows last
.			in,first out principle.
.				In stack we can insert the data which is called PUSH opration, delete the data known as POP operation.
.			There are a lot of thing also present which we will in in codes.
*/
#include<stdio.h>
#include<stdlib.h>   // This header file is for exit function.

#define MAX 5

int arr[MAX];    // Global declaration of arr[].
// Similarly since the top variable will use multiple times in different functions,so we will difine it globally as well.
int top = -1;
// top = -1 indicates that the stack is empty.

// ------------------------------------------------------------------------------------------------------------------
//                                    IsFULL FUNCTION
// WE WILL USE THIS FUNCTION TO CHECK WHETHER THE STACK IS FULL OR NOT
int isFull()
{
	// This function will return either 0 or 1.
	// 1 means the stack is full and 0 means the stack is not full.
	if (top == MAX-1)
	  return 1;
	else 
	  return 0;
}
// ------------------------------------------------------------------------------------------------------------------
//                                     IsEMPTY FUNCTION 
//  WE WILL USE THIS FUNCTION TO CHECK WHETHER THE STACK IS EMPTY OR NOT.
// (NOTE: If stack is not full than it doesn't mean that the stack is empty.)
int isEmpty()
{
	//This fuction will use in pop function.
	// This function will return either 0 or 1.
	// 1 means the stack is full and 0 means the stack is empty.
	if(top==-1)
	  return 1;
	else 
	  return 0;
}

//------------------------------------------------------------------------------------------------------------------
//                                     allElements FUNCTION
// THIS FUNCTION WILL USE TO PRINT ALL ELEMENTS OF STACK.
void allElements()
{
	int i;
	for (i = top; i >=0; i--)
	{
	 	printf("%d\n",arr[i]);
	}
}

// ------------------------------------------------------------------------------------------------------------------
 //                                         PUSH FUNCTION
 // NOW WILL WRITE A FUNCTION WHICH WILL PUT THE VALUES INTO THE STACK.
void push(int data)
{
//	 For the push opration 
//	1. top is incremented by 1.
//	2. New element is pushed at the position top.
    if(isFull())
    {
    	printf("SORRY Stack is OVERFLOW");
    	return;
    	// Here we write return because if stack will full then we don't need to run the remaing code.
    	// Hum main function me chale jae ge.
	}
	top++;
	arr[top] = data;
	return;
}

// ------------------------------------------------------------------------------------------------------------------
//                             POP FUNCTION
// WE WILL TAKE A FUNCTION WHICH WILL DELETE THE TOP MOST VALUE OF STACK.
int pop()
{
	//  For pop opration
	// 1. The element at the position of top is deleted.
	// 2.top is decremented by 1.
	if (isEmpty())
	{
		printf("Stack is EMPTY");
		exit(1);  // exit(1) means abnormal termination of the program.
	}
	int deleted_value;
	deleted_value = arr[top];
	top--;
	return deleted_value;
}

// ------------------------------------------------------------------------------------------------------------------
//                           MAIN FUNCTION
void main ()
{
	int element; // In this variable we will take the elements of stack.
	int no;    // This is the variable to chois out of 5.
	int deleted_value;  // In this variable we will stores the topmost value of stack which is deleted.
	int full,empt; // These variables will use to show that the stack is full or not.
	while(1)
	{
		printf("\n\tMenu\n");
		printf(" ----------------------\n");
        printf("|  1  |   PUSH         |\n");
        printf(" ----------------------\n");
	    printf(" ----------------------\n");
        printf("|  2  |   POP          |\n");
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
	      case 1:
	        printf("Enter the element::");
		    scanf("%d",&element);
		    push(element);
		    break;
          case 2:
	        deleted_value=pop();
		    printf("%d is deleted successfully\n",deleted_value);
		    break;
		 case 3: 
		    full =isFull();
			if(full==1)
			printf("Stack is FULL");
			else 
			printf("Stack is NOT full");
			break;
		 case 4:
		    empt=isEmpty();
			if(empt==1)
			printf("Stack is EMPTY");
			else 
			printf("Stack is NOT empty");
			break;
		 case 6:
		    exit(1);
			break;
		 case 5:
		    allElements();
			break;
	     default:
	        printf("U entered wrong number.");
		    break;
	    }
	}
}
/*
	CONCLUSION:
				In this programme we hava successfully implement STACK using array.We learn how to call a functoin,
			    how to wtite fuctions.We have use many functions like PUSH function, POP function, DISPLAY function,
				an many more.
			
*/
/*
.		OUTPUT:
		
        Menu
 ----------------------
|  1  |   PUSH         |
 ----------------------
 ----------------------
|  2  |   POP          |
 ----------------------
 ----------------------
|  3  |   IsFULL       |
 ----------------------
 ----------------------
|  4  |   IsEMPTY      |
 ----------------------
 ----------------------
|  5  |   ALL ELEMENT  |
 ----------------------
 ----------------------
|  6  |   QUIT         |
 ----------------------
                        Enter the number please::1
Enter the element::153

        Menu
 ----------------------
|  1  |   PUSH         |
 ----------------------
 ----------------------
|  2  |   POP          |
 ----------------------
 ----------------------
|  3  |   IsFULL       |
 ----------------------
 ----------------------
|  4  |   IsEMPTY      |
 ----------------------
 ----------------------
|  5  |   ALL ELEMENT  |
 ----------------------
 ----------------------
|  6  |   QUIT         |
 ----------------------
                        Enter the number please::2
153 is deleted successfully

        Menu
 ----------------------
|  1  |   PUSH         |
 ----------------------
 ----------------------
|  2  |   POP          |
 ----------------------
 ----------------------
|  3  |   IsFULL       |
 ----------------------
 ----------------------
|  4  |   IsEMPTY      |
 ----------------------
 ----------------------
|  5  |   ALL ELEMENT  |
 ----------------------
 ----------------------
|  6  |   QUIT         |
 ----------------------
                        Enter the number please::   
*/
