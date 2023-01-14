//	Simple Calculator

#include<stdio.h>
void main ()
{
	// In this programme we will make a simple calculator.
	
	float no1, no2, ans;
	char op;
	/*
	no1 is for storing first operand.
	no2 is for storing second operand.
	ans is for storing answer of operation.
	op is for storing operator.As all symbols and letters in C Language are consider 
	as character type.So we have taken operator variable as char type.
	*/
	
	printf("\tCALCULATOR\n");
	
	// Now let's take the numbers and operator from user.
	printf("Enter first no:");
	scanf("%f",&no1);
	printf("Enter operator:");
	scanf(" %c",&op);
	printf("Enter second no:");
	scanf("%f",&no2);
	
	// Now we will use four if operators for four different operators.
	// We will calculate the value of ans variable according to the operator.
	if(op=='+')
	{
		ans = no1+no2;
	}
	if(op=='-')
	{
		ans = no1-no2;
	}
	if(op=='*')
	{
		ans = no1*no2;
	}
	if(op=='/')
	{
		ans = no1/no2;
	}
	
	// Now we will print the answer of the operation.
	printf("Ans = %.2f",ans);
	
	// In if() since our op is char type so we write all signs in single quotes.
	
}
