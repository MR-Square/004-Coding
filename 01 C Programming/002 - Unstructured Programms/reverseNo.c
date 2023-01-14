//	Reverse of a number.

#include<stdio.h>
void main ()
{
	// In this programme we will take a number from user then reverse it.
	// i.e if user enter 146 then we will print its reverse which is 641.
	
	int no, rev=0, rem, temp;
	/*
	no is for storing number given by user.
	rev is for storing reverse of given number.
	rem is for storing last digit of given number.
	temp is for storing given number.
	*/
	
	// Now let's take the number from user.
	printf("Enter the number:");
	scanf("%d",&no);
	
	// Now we will store the given number in temp variable.
	temp = no;
	
	// To calculate the reverse of given number we will use while loop which is easy.
	// Keep it mind that 125 means 1 * 100 + 2 * 10 + 5
	
	// Now let's use while loop.
	while(no!=0)	// If you want to use for loop then write for(int i=no;i>0;i=i/10)
	{
		// First we will take last digit of given number.
		rem = no % 10;	// %10 gives us the last digit of any number.
		// Now we will reverse it.
		rev = rev * 10+rem;
		// Then we will eliminate the last digit of given number.
		no = no/10;	// /10 eliminates the last digit of any number.
	}
	// As we store reverse of given number in rev variable,so we will print its value.
	// Here value of no variable is zero.So we will use temp variable insted of no.
	printf("Reverse of %d is %d",temp,rev);
}
