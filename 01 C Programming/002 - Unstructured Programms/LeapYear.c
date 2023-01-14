//	Checking Leap Year

#include<stdio.h>
void main ()
{
	/*
	Leap Year:
			A year which is completely divisible by 4 but not divisible by 100 is 
			called leap year,except century years(like 1900,3000). The century year
			will be leap year if and only if it is compeletely divisible by 400.
	*/
	
	int year;
	// year is for storing year given by user.
	
	// Now first let's take the year from user.
	printf("Enter the year:");
	scanf("%d",&year);
	// As year can not be in fractional form.Therefore we have taken it as int type.
	
	// Now we will use if statements.
	
	if(year%4==0 && year%100!=0)	// This is for any years except century years.
	// && is logical ans operator and != is not equals to operator.
	{
		printf("%d IS a leap year.",year);
	} 
	else 
	if(year%400==0)	// This is for checking century year is leap or not.
	{
		printf("%d IS a leap year.",year);
	}
	else 
	{
		// This code will be execute if the given year is NOT leap year.
		printf("%d is NOT a leap year.",year);
	}
	
}
