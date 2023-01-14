//	Finding Quotient and Remainder
#include<stdio.h>
void main ()
{
	int dividend, divisor, quotient, remainder;
	
	printf("Enter Dividend:");
	scanf("%d",&dividend);
	
	printf("Enter Divisor:");
	scanf("%d",&divisor);
	
	quotient  = dividend / divisor;
	remainder = dividend % divisor; // % is modular operator.
	
	printf("Quotient = %d\n",quotient);
	printf("Remainder = %d",remainder);
}
