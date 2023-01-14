// 	SUMMATION OF A NUMBER

#include<stdio.h>
void main ()
{
	// In this programme we will do the addition from 1 to the number given by user.
	
	// We will take three variables.
	int no, i , sum=0;
	/*
	 no is for storing number given by user.
	 i will be use in for loop.
	 sum variable will store the addition from 1 to given number.
	 Here we have taken sum = 0 because 0 plus any number is equal to that number
	 only. i.e 0 + x = x
	*/
	
	// Now let's take the number from user.
	printf("Enter the number:");
	scanf("%d",&no);
	
	/*
	Now we will use for loop.
	We use for loop when we want to run same line of code multiple times.
	*/
	for(i=1;i<=no;i++)	// Here you can also write for(i=no;i>0;i--)
	{
		sum = sum +i;
		// Here we are adding values of i and sum and storing their addition in 
		// sum variable again.
	}
	
	// Now we will print the value of sum variable.
	printf("SUMMATION = %d",sum);
	
	
	
	
	
}
