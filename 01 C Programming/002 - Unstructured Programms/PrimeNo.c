//	Prime Number

#include<stdio.h>
void main()
{
	/*
	Prime Number:
				 A number which is completely divided by 1 and itself.
				 e.g: 7 is divisible by 1 and 7 only, but 4 is divisible by
				 1,2,4 so 7 is prime number and 4 is not prime number.
	*/
	
	int no,i,flag=0;
	/*
	no is for storing number given by user.
	i will be use in for loop.
	flag variable will use as a condition. i.e if the value of flag will remain 0 
	at the end of programme then the number given by user will be Prime No. or if 
	the value of flag will became 1 then it means the given number is not Prime No.
	*/
	
	// Let's take the number from user.
	printf("Enter the number:");
	scanf("%d",&no);
	/*
	Now we will do division of given number. We will divide given number from  2 
	to one less of given number.
	i.e if user enter 5 then we will divide 5 by 2,3,4. If remainder of atleast one 
	division will be 0 then it means 5 is not Prime No otherwise 5 will be Prime No.
	*/
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		{
			flag=1;
			break;
			// % is a moduler operator.It gives us the reaminder of division.
			// We use break statemet which will bring the programme out of the 
			// loop when condition of if will satisfied.
		}
	}
	
	if(flag==1)
	printf("%d is NOT Prime No",no);
	// If you have only one line of code in if() then you don't need to use {}.
	
	else 
	printf("%d IS a Prime No",no);
	
	
	
	
	
	
	
	
	
}
