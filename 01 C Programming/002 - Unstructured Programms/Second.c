// In this programme we will see use of "scanf()" function.

#include<stdio.h>
void main()
{
	/*
	First we will take number from user.
	for integer data type we use 'int' keyword and for float data type we use 'float' keyword.
	*/
	int no;  // this step is called declaration.
	// Here no is the name of our variable of integer data type.You can also write float insted of int.
	printf("Enter a number::");
	scanf("%d",&no);
	// %d is used for integer and %f is used for float.
	
	/*
	 Now we will take character form user 
	 for character data type we use 'char' keyword.
	*/
	char a;
	// Here a is the name of our variable of character data type.You can give the name which you want.
	printf("Enter a alphabet::");
	scanf(" %c",&a);
	// %c is used for character.
	printf("You entered %d no and %c alphabet",no,a);
	//NOTE: in scanf don't forget to use & before writing name of variable.
	//		Don't forget to put semicolon(;) after completing all statement.
	
}
