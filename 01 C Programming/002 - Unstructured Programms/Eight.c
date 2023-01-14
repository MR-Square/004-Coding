// 		Finding mean of five numbers.
#include<stdio.h>
void main ()
{
	// We will take five values from user.
	float a,b,c,d,e;
	printf("Enter first number:");
	scanf("%f",&a);
	printf("Enter second number:");
	scanf("%f",&b);
	printf("Enter third number:");
	scanf("%f",&c);
	printf("Enter fourth number:");
	scanf("%f",&d);
	printf("Enter fifth number:");
	scanf("%f",&e);	
	
	float Mean;
	Mean = (a+b+c+d+e)/5.0;
	// As all variables are floating type, so we write 5.0 insted of 5.You can write 5 also.
	
	printf("MEAN = %.3f",Mean);
}
