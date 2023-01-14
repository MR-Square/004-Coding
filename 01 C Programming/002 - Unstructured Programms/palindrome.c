//	Palindrome Numbers

#include<stdio.h>
void main ()
{
	/*
	A Palindrome number is a number that is same after the reversing its digits.
	e.g: 121,4884 are the palindrome numbers.
	*/
	
	int no, last, sum=0,temp;
	/*
	no is for storing number given by user.
	last is for storing the last digit of given number.
	sum is for storing the sum of last digits of given number.
	temp is for storing given number.
	*/
	
	// Now let's take the number from user.
	printf("Enter the number::");
	scanf("%d",&no);
	
	/*
	Now we will store the given number in temp variable also,because after doing 
	calculation the value of no variable will become zero.
	*/
	temp = no;
	
	/*
	Now we will use while loop.We will terminate the loop unless the value of 
	no variable become 0.
	*/
	while(no>0)
	{
		// In this loop we will do the reversing of given number.
		// First we will store the last digit of given number in last variable.
		last = no % 10;
		
		// Now we will store it in sum variable.
		sum = (sum * 10) + last;
		
		// Now we will eliminate the last digit of given number.
		no = no/10;
	}
	
	/*
	If the value of temp variable will equals to sum variable then the given number
	is palindrome, because in sum variable we have stored the reverse of given 
	number.
	*/
	if(temp==sum)
	printf("%d IS Palindrome Number",temp);
	
	else 
	printf("%d is NOT Palindrome Number",temp);
	
	
	
}
