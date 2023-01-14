//	Factorial of a Number

#include<stdio.h>
void main()
{
	// Here we will take three variables.
	int i, no, fact=1;
	/*
	i is for For loop.
	no is for storing number given by user.
	We will multiple the fact variable by i variable and store their product in fact variable again.
	Here we take fact=1 because 1 multiple by any no is equal to that no only.
	i.e 1 * any no = any no
	*/
	
	// Now we will take number from user whose factorial have to find.
	printf("Enter the number:");
	scanf("%d",&no);
	
	/*
	Now we will use for loop
	We use for loop when we want to run the same line of code multiple times.
	*/
	
	for(i=1;i<=no;i++)	// Here you can also write for(i=no;i>0;i--)
	{
		fact = fact * i;
	}
	
	// Now we will print the value of fact variable.
	printf("FACTORIAL OF %d =%d",no, fact);
	
	
	
}
