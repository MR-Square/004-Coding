//	FIBONACCI SERIES

#include<stdio.h>
void main()
{
	/*
	In this programme we will print the Fibonacci series.We will take the number 
	of element from user upto which series have to print.
	Fibonacci Series: 0,1,1,2,3,5,8,...
	i.e each term = the sum of two preceding onces.
	*/
	
	int no, i, a=0, b=1, c;
	/*
	no is for storing number given by user.
	i is for using in for loop.
	a is for first term of series.
	b is for second term of series.
	c is for next term of series.
	*/
	
	// Let's take the number of term from user.
	printf("Enter the number of element:");
	scanf("%d",&no);
	
	// Now we will print the first two terms which is always 0 and 1.
	printf("%d, %d, ",a,b);
	
	// Now we will use for loop to print the remaing terms.
	// We wil start the value of i variable as we have printed 2 terms already.
	for(i=3;i<=no;i++)
	{
		// First we will calculate the value of next term which is c.
		c = a + b;
		// Now we will print the value of c.
		printf("%d, ",c);
		// Then we will store value of b in a and value of c in b.
		a = b;
		b = c;
	}
	// Here our programme is done.
	
}
