//	Function in C - 3

#include<stdio.h>
#include<stdlib.h>

void main();
void Fact();
void Fibo();
void Odd();
void Prim();
void Sum();

void main ()
{
	// This is our main function.
	
	int cho;
	// cho is for storing choise of user.
	
	// Now to run the program infinitely we will use while loop.
	while(1)	// 1 means condition wil always true.
	{
		// Let's print the menu.
		printf("\n\nFor Factorial press 1\n");
		printf("For Fibonacci Series press 2\n");
		printf("For Odd Number seires press 3\n");
		printf("For Prime Numbers Series press 4\n");
		printf("For Summation press 5\n");
		printf("To exit the program pess 6\n");
		
		// Let's take the choise from user.
		printf("\tEnter the number::");
		scanf("%d",&cho);
		
		// Now for each choises we will use switch statements.
		switch(cho)
		{
			case 1:
				Fact();
				break;
			case 2:
				Fibo();
				break;
			case 3:
				Odd();
				break;
			case 4:
				Prim();
				break;
			case 5:
				Sum();
				break;
			case 6:
				exit(1);
				break;
			default:
				// If user entered wrong number than we will print.
				printf("You entered wrong number.\n");
		}
	}
}

void Fact ()
{
	// This function is for finding factorial.
	
	int no,i,fact=1;
	/*
	no is for storing number whose factorial have to find.
	i is for using in for loop.
	fact is for storing factorial of number.
	*/
	
	// Let's take the number.
	printf("\nEnter the number::");
	scanf("%d",&no);
	
	// Now we will do calculation using for loop.
	for(i=no;i>0;i--)
	{
		if(i>1)
		{
			fact = fact * i;
			printf("%d * ",i);
		}
		
		else 
		{
			fact = fact * i;
			printf("%d = ",i);
		}
	}
	
	// Now let's print the result.
	printf("%d",fact);
}

void Fibo ()
{
	// This function is for printing fibonacci series.
	
	int no, i, a=0, b=1, c;
	/*
	no is for storing number of element given by user.
	i is for using in for loop.
	a is for first term.
	b is for second term.
	c is for next term.
	*/
	
	// Let's take the number of element from user.
	printf("\nEnter the number of element::");
	scanf("%d",&no);
	
	// Now let's print the first and second terms.
	printf("%d, %d, ",a,b);
	
	// Now we will use for loop to print remaining terms.
	for(i=3;i<=no;i++)
	{
		// calculating next term.
		c = a + b;
		// print the next term.
		printf("%d, ",c);
		// then for next term.
		a = b;
		b = c;
	}
	
}

void Odd ()
{
	// This function is for printing list of odd numbers.
	
	int no,i;
	// no is for storing number upto list have printed from user.
	// i is for using in for loop.
	
	// Let's take the value of no from user.
	printf("\nEnter the number::");
	scanf("%d",&no);
	
	// Let's print the list of odd numbers upto certain number.
	for(i=1;i<=no;i+=2)
	{
		printf("%d, ",i);
	}
}

void Prim ()
{
	// This function is for printing list of prime numbers.
	
	int no,i,j,flag;
	/*
	no is for storing number given by user.
	i is for using in for loop.
	j is for using in another fo loop.
	flag is for using as a condition.
	*/
	
	// Let's take the number from user.
	printf("\nEnter the number::");
	scanf("%d",&no);
	
	// Now let's print the list of prime numbers.
	for(i=2;i<=no;i++)
	{
		// It is our outer for loop.
		flag = 0;
		
		for(j=2;j<i;j++)
		{
			// It is our inner for loop.
			if(i%j==0)
			{
				flag = 1;
				break;
			}
		}
		if(flag==0)
		printf("%d, ",i);
	}
}

void Sum ()
{
	// This function is for printing the summation of number.
	
	int no,i,sum=0;
	/*
	no is for storing the number whose summation have to find.
	i is for using in for loop.
	sum is for storing the summation of number.
	*/
	
	// Let's take the number from user.
	printf("\nEnter the number::");
	scanf("%d",&no);
	
	// For calculation let's use for loop.
	for(i=no;i>0;i--)
	{
		if(i>1)
		{
			sum = sum + i;
			printf("%d + ",i);
		}
		
		else 
		{
			sum = sum + i;
			printf("%d = ",i);
		}
	}
	
	// Let's print the result.
	printf("%d",sum);
}




