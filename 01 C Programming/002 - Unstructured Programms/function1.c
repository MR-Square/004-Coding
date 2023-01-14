//	Functions in C

#include<stdio.h>
#include<stdlib.h>	// This is for exit function.

void main();
void arm();
void odd();
void pal();
void prim();
void spy();

void main()
{
	// This is our main function.
	
	int no;
	// no is for storing number given by user.
	
	// Now to run the program infinitely we will use while loop.
	while(1)	// 1 means condition will always true.
	{
		printf("\n\nFor Armstrong NO press : 1\n");
		printf("For Odd No press : 2\n");
		printf("For Palendrome No press : 3\n");
		printf("For Prime No press : 4\n");
		printf("For Spy No press : 5\n");
		printf("To exit the program press : 6\n");
		printf("\tEnter the number::");
		scanf("%d",&no);
		
		// Now for each choises we will use switch statements.
		switch(no)
		{
			case 1 :
				arm();
				break;
			case 2:
				odd();
				break;
			case 3:
				pal();
				break;
			case 4:
				prim();
				break;
			case 5:
				spy();
				break;
			case 6:
				exit(1);	// This function will exit the program.
				break;
			default:
				printf("You entered wrong number.");	
		}	
	}	
	
}


void arm ()
{
	// This function is for checking Armstrong No.
	
	int no, rem, sum=0, temp;
	/*
	no is for storing number given by user.
	rem is for storing last digit of given number.
	sum is for storing sum of cubes of digits of given number.
	temp is for storing given number.
	*/
	
	// Let's take the number from user.
	printf("Enter the number::");
	scanf("%d",&no);
	
	// Now we will store the value of no variable in temp variable then use it
	// in while loop.
	temp = no;
	while(temp>0)
	{
		// storing last digit of given number.
		rem = temp % 10;
		// Now do its cube.
		sum = sum + (rem*rem*rem);
		// Then eliminate last digit of given number.
		temp = temp / 10;
	}
	
	if(no==sum)
	printf("%d IS Armstrong No.",no);
	
	else 
	printf("%d is NOT Armstrong NO.",no);
}

void odd ()
{
	// This function is for checking odd number.
	
	int no;
	// no is for storing number given by user.
	
	// Let's take the number from user.
	printf("Enter the number::");
	scanf("%d",&no);
	
	// Let's check whether the number is odd or not and then print the result.
	if(no%2!=0)
	printf("%d IS ODD No.",no);
	else 
	printf("%d is NOT ODD No.",no);
}

void pal ()
{
	// This function is for checking Palindrome No.
	
	int no, temp, rem, new=0;
	/*
	no is for storing number given by user.
	temp is for storing given number.
	rem is for storing last digit of given number.
	new is for storing reverse number of given number.
	*/
	
	// Let's take the number from user.
	printf("Enter the number::");
	scanf("%d",&no);
	
	// Now we will store the value of no variable in temp variable then use it
	// in while loop.
	temp = no;
	while(temp!=0)
	{
		// Storing last digit of given number.
		rem = temp % 10;
		// add it in new variable.
		new = new * 10 + rem;
		// Eliminate the last digit.
		temp = temp / 10;
	}
	
	if(new==no)
	printf("%d IS a Palindrome No.",no);
	else 
	printf("%d is NOT a Palindrome No.",no);
}

void prim ()
{
	// This function is for checking prime number.
	
	int no, i, flag=0;
	/*
	no is for storing number given by user.
	i is for using in for loop.
	flag is for using as a condition.
	*/
	
	// Let's take the number from user.
	printf("Enter the number::");
	scanf("%d",&no);
	
	// Now let's divide the given number from all numbers which are smaller
	// than the given number.
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		{
			flag=1;
			break;
			// If condtion of if become true then break statement wiil bring
			// the program out of for loop.
		}
	}
	
	if(flag==1)
	printf("%d is NOT Prime No.",no);
	else 
	printf("%d IS a Prime No.",no);
}


void spy ()
{
	// This function is for checking spy number.
	
	int no, sum=0, mul=1, last, temp;
	/*
	no is for storing the number given by user.
	sum is for storing the sum of digits of given number.
	mul is for storing the product of digits of given number.
	last is for storing the last digit of given number.
	temp is for storing the given number.
	*/
	
	// Let's take the number from user.
	printf("Enter the number::");
	scanf("%d",&no);
	
	// Now we will store the value of no variable in tmep varible then use it
	// in while loop.
	temp = no;
	while(temp!=0)
	{
		last = temp % 10;
		sum = sum + last;
		mul = mul * last;
		temp = temp / 10;
	}
	
	if(sum==mul)
	printf("%d IS Spy No.",no);
	else 
	printf("%d is NOT Spy No.",no);
}








