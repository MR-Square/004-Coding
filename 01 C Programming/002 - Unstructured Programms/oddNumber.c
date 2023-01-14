//	ODD Number between 1 and given number.

#include<stdio.h>
void main()
{
	/*
	ODD NUMVER:
		A number which is not completely divisible by 2 is called odd number.
		i.e if we divide a number by 2 and remainder comes 1 then that number is 
		odd number.
		e.g: 1,9,11,125 are odd numbers.
	*/
	
	int no, i;
	/*
	no is for storing number given by user.
	i is for using in for loop.
	*/
	
	// Let's take the number from user.
	printf("Enter the number:");
	scanf("%d",&no);
	
	// Now we will print the list of odd numbers between 1 and given number entered 
	// by user.
	printf("List of odd number between 1 and %d is as follow:\n",no);
	
	/*
	To print all odd number we will use for loop in such a way we will increase 
	the value of i variable by 2 and print its value.
	*/
	for(i=1;i<=no;i+=2)	// Here you can also write for(i=1;i<=no;i=i+2)
	{
		printf("%d\n",i);
	}
	
	
	
}
