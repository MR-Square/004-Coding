//	Calculating no of digits in a given number.

#include<stdio.h>
void main ()
{
	// In this programme we will take a number from user then calculate its digits.
	
	int no, i, count=0;
	/*
	no is for storing number given by user.
	i is for using in for loop.
	count is for counting and storing number of digits in given number.
	*/
	
	// Let's take the number from user.
	printf("Enter the number:");
	scanf("%d",&no);
	
	/*
	 Now we will check whether the given number is zero or not.If it is not zero then
	 we will increase the value of count variable by 1 and eliminate the last digit 
	 of given number.We will performe the procedure again and angain unless the value
	 of i variable become zero.
	*/
	
	// User may enter positive number, negative number,letters or symbols.
	// If user enter positive or negative numbers then we will calculate the digits.
	// If user enter letters or symbols then we will print error.
	
	if(no>0)
	{
		for(i=no;i>0;i=i/10)
		count++;
		// Here we have only one line of code in for loop.Therefore we don't use {}.
		
		printf("%d has %d digits",no,count);
	}
	
	else 
	{
		if(no<0)
		{
			for(i=no;i<0;i=i/10)
			count++;
			
			printf("%d has %d digits",no,count);
		}
		
		else 
		printf("You entered wrong input.");
	}
	
	/*
	You can also write the same code using while loop which is easy.But here the 
	value of no variable will be change after calculation and will become zero.So
	at the end of while loop insted of using no variable we will use new variable.
	
	Here is the code:
	after take the number from user.
	temp = no;
	while(no!=0)
	{
		count++;
		no = no/10;
	}
	printf("%d has %d digits",temp,count);
	
	If you want to use while loop then after taking the number from user.
	write directly while loop.You don't need to use if-else lader.
	*/
	
	
}
