//	Prime Number between Two given numbers.

#include<stdio.h>
void main ()
{
	/*
	In this programme we will take two numbers from user and will print all prime 
	numbers between them.
	*/
	
	int no1,no2,flag,i,j;
	/*
	no1 is for storing first number.
	no2 is for storing second number.
	flag is for using as a condition.
	i is for using in for loop.
	j is for using in another for loop.
	*/
	
	// Now let's take the numbers from user.
	printf("Enter the first number:");
	scanf("%d",&no1);
	printf("Enter the second number:");
	scanf("%d",&no2);
	
	// Let's print the prime numbers between given numbers.
	printf("The prime numbers between %d and %d are :\n",no1,no2);
	
	/*
	Now we will use two for loops, one as a outer for loop and another one as a inner
	for loop.We will use is variable in outer for loop and j variable in inner for
	loop.
	*/
	for(i=no1;i<=no2;i++)	// This is our outer for loop.
	{
		/*
		Now we will take the value of flag variable as 0. The logic is that at the
		end of inner for loop,if the value of flag variable remains 0 then the 
		number will be prime.If it becomes 1 then number will not be prime.
		*/
		flag=0;
		
		// Now we will use another for loop.
		for(j=2;j<i;j++)	// This is our inner for loop.
		{
			/*
			Here we will divide the value of i variable by j variable.
			If their remainder comes 0 then i will not be prime number.
			*/
			if(i%j==0)
			{
				flag = 1;
				break;
			}
		}
		/*
		If the value of flag will remain 0 then we will print the value of i variable.
		Remember we are not print the value of no1 and no2 variable.
		*/
		if(flag==0)
		printf("%d, ",i);
	}
}
