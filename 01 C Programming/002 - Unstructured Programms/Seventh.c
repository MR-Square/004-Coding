//		Pythagorean Triplets

#include<stdio.h>
#include<math.h>	// New header file.

void main ()
{
	// In this programme we will take both sides of Right-Angled triangle and calculate the 
	// hypotenuse of that triangle.
	
	float a,b,c;
	// a and b are sides of Triangle.
	// c is hypotenuse of Triangle.
	
	printf("\tPythagorean Triplets\n");
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	c= sqrt(a*a+b*b);		// By Pythagorus formula.
	printf("c= %.2f",c);
}
