//	Checking Spy Numbers.

#include<stdio.h>
void main ()
{
	/*
	SPY Number:
		If the sum of digits of a number is equals to the product of digits of that 
		number then that number is called spy number.
		e.g: 1241,123 are spy numbers.
	*/
	
	// In this programme we will take a number from user then check whether it is 
	// spy or not.
	
	int no, sum=0, mul=1, last, temp;
	/*
	no is for storing the number given by user.
	sum is for storing the sum of digits of given number.
	mul is for storing the product of digits of given number.
	last is for storing the last digit of given number.
	temp is for storing the given number.
	*/
	
	// Let's take the number from user.
	printf("Enter the number:");
	scanf("%d",&no);
	
	// Now we will store the given number in temp variable.
	temp = no;
	 
	// Now we will calculate the sum & product of digits of given number using 
	// while loop.
	while(no!=0)
	{
		last = no % 10;	// %10 gives us the last digit of any number.
		sum = sum + last;	// This is for sum of digits of given number.
		mul = mul * last;	// This is for product of digits of given number.
		no = no/ 10;	// This is for eliminating the last digit of given number.	
	}
	/*
	If you want to use for loop then write this part insted of while loop.
	for(int i=no;i>0;i=i/10)
	{
		last = i % 10;
		sum = sum + last;
		mul = mul * last;
	}
	You don't need to use temp variable if you are using for loop.
	*/
	
	// Here the value of no variable is zero.
	
	/*
	By definition of spy numbers if the sum and product of digits of number are 
	equal then that number will be spy,otherwise number will not be spy.
	*/
	if(sum==mul)
	printf("%d IS Spy Number.",temp);
	
	else 
	printf("%d is NOT Spy Number.",temp);
	
	
	
}
