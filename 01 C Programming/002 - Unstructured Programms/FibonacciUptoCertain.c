//	Fibonacci Series upto a Certain Number.

#include<stdio.h>
void main ()
{
	/*
	In this programme we will take a number from user and print the series upto 
	that number or if that number does not belongs to series then we will go upto 
	the number less than given number and belongs to series.
	*/
	
	int a=0, b=1,c,no;
	/*
	a is for first term.
	b is for second term.
	c is for next term.
	no is for storing number given by user.
	*/
	
	// Let's take the number from user.
	printf("Enter  a Positive number:");
	scanf("%d",&no);
	
	// Here user can entered negative number, zero or greater than zero.
	
	// If user entered negative number then we don't need to print any term.
	if(no<0)
	printf("You entered wrong number.Please entered Positive number.");
	
	else
	{
		if(no==0)
		printf("Fibonacci Series:\n0");
		
		else
		{
			// This code will run only when both condition will be false.
			
			// Now let's print the first two terms which are always 0 and 1.
			printf("Fibonacci Series:\n%d, %d, ",a,b);
			
			// Now we will calculate the third term.
			c = a+b;
			
			/*
			In this programme we will use while loop. We will go upto the number 
			given by user if that number belongs to series,otherwise we will go to
			the number which belongs to series and less than the given number.
			*/
			while(c<=no)	// Here you can also write for(int i=c;i<=no;i=c)
			{
				printf("%d, ",c);
				// Now we will store the value of b in a
				a = b;
				// And value of c in b
				b = c;
				// Now we will calculate the value of c again.
				c = a+b;
			}
		}
	}
	
	
	
}
