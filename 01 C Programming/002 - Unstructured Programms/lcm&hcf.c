//	LCM and HCF of two numbers.

#include<stdio.h>
void main ()
{
	/*
	In this program we will take two numbers from user then calculate their LCM and 
	HCF.
	LCM : It is the least common multiple of the numbers.It is greater the given 
		numbers.
	HCF : It is the higher common factor of the numbers.It is less than the given 
		numbers.
	*/
	
	int no1, no2, lcm, hcf, temp1, temp2;
	/*
	no1 is for storing the first number.
	no2 is for storing the second number.
	lcm is for storing the lcm of both numbers.
	hcf is for storing the hcf of both numbers.
	temp1 is for storing the first given number.
	temp2 is for storing the second given number.
	*/
	
	// Let's take both the numbers from user.
	printf("Enter the first number:");
	scanf("%d",&no1);
	printf("Enter the second number:");
	scanf("%d",&no2);
	
	// Now we will store both the numbers in temp1 and temp2 variables.
	temp1 = no1;
	temp2 = no2;
	
	// First we will calculate the hcf of both numbers.
	while(no1!=no2)	// This loop will be run untill both no1 and no2 become equals.
	{
		if(no1>no2)
		no1 = no1-no2;
		
		else no2 = no2-no1;
	}
	
	// When the value of no1 and no2 become equal then the value of these variable
	// are equals to the hcf.
	hcf = no1;
	
	// Now we will calculate the lcm.
	lcm = temp1 * temp2 / hcf ;
	
	// Let's print the lcm and hcf of given numbers.
	printf("LCM of %d and %d is %d",temp1, temp2, lcm);
	printf("\nHCF of %d and %d is %d",temp1, temp2, hcf);
}
