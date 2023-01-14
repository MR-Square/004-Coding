//	Class By Persentage

#include<stdio.h>
void main()
{
	/*
		In this programme we will take persentage of student and wil print
		his/her class like distinction, first class etc.
		
		Since persentage may be in decimal value, so we will take floating variable.
	*/
	float per;
	
	// Now let's take the persentage from user.
	printf("Enter your persentage::");
	scanf("%f",&per);
	
	/*
	If persentage of student is between 75% and 100% then he/she is passed with
	distinction class.
	*/
	if(per>=75 && per<100)
	{
		printf("You are passed with DISTINCTION\n");
	}
	
	else 
	{
		// If persentage of student is more than 60% but less than 75% 
		// then he/she is passed with first class.
		if(per>=60 && per<75)
		{
			printf("You are passed with FIRST CLASS\n");
		}
		
		else 
		{
			// If persentage of student is more than 40% but less than 60% 
			// then he/she is passed with second class
			if(per>=40 && per<60)
			{
				printf("You are passed with SECOND CLASS\n");
			}
			
			else
			{
				// If persentage of student is less than 40% then 
				// he/she is fail.
				if(per<40)
				{
					printf("You are FAIL\n");
				}
				else 
				{
					// If user entered more than 100 number than we will print 
					// that you entered wrong persentage.
					printf("You entered wrong persentage\n");
					
				}
			}
			
			
		}
		
	}
	
	
	
	
	
	
}
