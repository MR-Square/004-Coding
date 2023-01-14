//	Addition of two numbers using scanf functin.

#include<stdio.h>
void main()
{
	// First we will declar three variables.
	int no1,no2,sum;	// DECLARATION
	// now we will take first number from user.
	printf("Enter first number:");
	scanf("%d",&no1);
	// now we will take second number from user.
	printf("Enter second number:");
	scanf("%d",&no2);
	//now we will print sum of these number.
	sum = no1+no2;
	printf("Addition = %d",sum);
	
	/*
	NOTE: Don't use & in printf function.
	*/	
}
