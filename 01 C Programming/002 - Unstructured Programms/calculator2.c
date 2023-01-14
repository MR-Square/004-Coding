//	Calculator using function.

/*
	In this program we will use five functions four will be for four different 
	operations and one will be main function.
*/

#include<stdio.h>

void add (int a, int b)
{
	// This is for addition operation.
	int sum;
	sum = a + b;
	printf("Sum = %d",sum);
}

void min (int a,int b)
{
	// Thsi is for minus operation.
	int min;
	min = a - b ;
	printf("Min = %d",min);
}

void mul (int a, int b)
{
	// This is for multiplication operation.
	int mul;
	mul = a * b;
	printf("Mul = %d",mul);
}

void div (int a, int b)
{
	// This is for division operation.
	int div;
	div = a / b;
	printf("Div = %d",div);
}

void main ()
{
	// This is our main function.
	int no1,no2;
	// no1 is for storing first number given by user.
	// no2 is for storing second number given by user.
	
	char op;
	// op is for storing operators given by user.All signs in C are character 
	// type.
	
	// Now let's take the numbers and operator from user.
	printf("Enter first number:");
	scanf("%d",&no1);
	printf("Enter operator:");
	scanf(" %c",&op);
	printf("Enter second number:");
	scanf("%d",&no2);
	
	// Now for each operations we will use switch statements.
	switch(op)
	{
		case '+':
			add(no1,no2);
			break;
		case '-':
			min(no1,no2);
			break;
		case '*':
			mul(no1,no2);
			break;
		case '/':
			div(no1,no2);
			break;
		default :
			printf("You entered wrong sign.");
	}
}



