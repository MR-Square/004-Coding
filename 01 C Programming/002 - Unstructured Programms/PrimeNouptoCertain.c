//	Prime Number upto a Certain Number.

#include<stdio.h>
void main()
{
	/*
	In this programme we will print all prime numbers between 1 and a certain number.
	In this programme what we will do, simply we will take a number from user then we 
	will print all prime numbers between 1 and that number.
	*/
	
	int no, i, j, flag;
	/*
	no is for storing number given by user.
	i is for using in for loop.
	j is for using in another for loop.
	flag is for using as a condition in if.
	*/
	
	// Let's take the number from user.
	printf("Enter the number upto that you want prime numbers:");
	scanf("%d",&no);
	
	// Now let's print the numbers.
	printf("\nList of Prime Numbers between 1 and %d are as follow\n",no);
	/*
	Now we will use two for loops, one as a outer for loop and another one as a 
	inner for loop.We will use i variable in outer for loop and j variable in inner
	for loop.
	*/
	for(i=2;i<=no;i++)	// It is our outer for loop.
	{
		/*
		Here we are starting from 2 because we know that 1 is neither prime nor 
		composite. 
		*/
		
		/*
		Now we will take the value of flag as 0. The logic is simple that at the 
		end of inner for loop if the value of flag variable remain 0 then the number
		will be prime. If it becomes 1 then the number will not be prime.
		*/
		flag = 0;
		
		// Now we will use another for loop.
		for(j=2;j<i;j++)	// It is inner for loop.
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
		Remember we will not print the value of no variable.
		*/
		if(flag==0)
		printf("%d, ",i);
	}
	
	
	
}
