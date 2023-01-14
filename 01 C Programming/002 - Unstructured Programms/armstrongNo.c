//	Armstrong Number

#include<stdio.h>
void main ()
{
	/*
	Armstrong Number:
		A number which is equls to the sum of cube of its digits is called 
		armstrong number.
		e.g: 153 is a armstrong number,because 
		153 = (1*1*1) + (5*5*5) +(3*3*3)
		153 = 1+125+27
		153 = 153
	*/
	
	int no, rem, sum=0, temp;
	/*
	no is for storing number given by user.
	rem is for storing last digit of number given by user.
	sum is for storing  addition cube of digits of given number.
	temp is for storing given number.
	*/
	
	// Let's take the number.
	printf("Enter the Number:");
	scanf("%d",&no);
	
	// Now we will store the value of no in temp variable,because after calculation
	// value of no variable become zero.
	temp = no;
	
	// Now we will use while loop, because it is easy insted of using for loop.
	while(no>0)
	{
		// First we will take last digit of given number and store it in rem variable.
		rem = no%10; // Here % is a modular operator.
		
		// Now we will do its cube and store it in sum variable.
		sum = sum + (rem * rem * rem);
		
		// Now we will eliminate the last digit of number given by user.
		no = no / 10;
		/*
		We will perform the above procedure unless the value of no variable 
		become 0. When the value of no variable become 0 we will com out of 
		the loop.
		*/
	}
	
	// Here the value of no variable is zero.And our given number is store in 
	// temp variable.
	
	/*
	If value of sum variable i.e sum of cube of all digits, is equals to the value 
	of temp variable then the given number is armstrong number.Otherwise given number
	is not armstrong number.
	*/
	if(temp==sum)
	printf("%d IS Armstrong number",temp);
	
	else 
	printf("%d is NOT Armstrong number",temp);
	
	// Here we have only one line of code in if-else.Therefore we don't use {}.
	
	
	
	
	
	
}
