// 	Voting Criteria
#include<stdio.h>
void main ()
{
	/*
		We will take age of user. If he/she is 18 or more than 18 then he/she is eligible
		to give vote. Otherwise he/she is not eligible.
		We will take age in integer type not float, but you can take any type.
	*/
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	// Now we will use if-else 
	// We write if(condition) then curly bracket.
	// In curly bracket we write our code.
	if(age>17)
	{
		printf("You are eligible to vote");
	}
	else 
	{
		printf("You are NOT eligible to vote");
		// when condition of if will false compiler run the else code.
	}
}
