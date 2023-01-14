//	Checking Vowels

#include<stdio.h>
void main ()
{
	/*
	In this programme we will take a letter from user and check whether it is vowel
	or consunant. We will write the programme using switch statement.
	*/
	
	char alp;
	// alp is for storing alphabet/letter given from user.
	
	// Let's take the letter from user.
	printf("Enter the letter:");
	scanf("%c",&alp);
	
	/*
	Basic structure of switch statement:
	switch(expression)
	{
	case 1:
		// This code will execute if expression = 1;
		   break;
	case 2:
		// This code will execute if expression = 2;
			break;
	.
	.
	.
	case N:
		// This code will execute if expression = N;
		break;
	default:
		// This code will be execute if expression doesn't match any cases.
	}
	
	In each cases we also use break statement. Because if we don't use it then,when
	any case will be true then not only that case but also the cases that are below
	the true case will be execute.Since the default is the last case,so no need to 
	use break statement in default case.
	
	*/
	switch(alp)
	{
		/*
		We know that both capital and small a,e,i,o and u are vowels and capital and
		small w and y are semi vowels.So we will use different cases for these letters.
		*/
		case 'A':
			printf("%c is a VOWEL",alp);
			break;
		case 'E':
			printf("%c is a VOWEL",alp);
			break;
		case 'I':
			printf("%c is a VOWEL",alp);
			break;
		case 'O':
			printf("%c is a VOWEL",alp);
			break;
		case 'U':
			printf("%c is a VOWEL",alp);
			break;
		case 'W':
			printf("%c is a SEMI-VOWEL",alp);
			break;
		case 'Y':
			printf("%c is a SEMI-VOWEL",alp);
			break;
		case 'a':
			printf("%c is a VOWEL",alp);
			break;
		case 'e':
			printf("%c is a VOWEL",alp);
			break;
		case 'i':
			printf("%c is a VOWEL",alp);
			break;
		case 'o':
			printf("%c is a VOWEL",alp);
			break;
		case 'u':
			printf("%c is a VOWEL",alp);
			break;
		case 'w':
			printf("%c is a SEMI-VOWEL",alp);
			break;
		case 'y':
			printf("%c is a SEMI-VOWEL",alp);
			break;
		default:
			// We will use it for all consunants.
			printf("%c is a CONSUNANT",alp);
	}
	// As our alp variable is char type,so we use single quotes in cases.
	// If it was of int type then we don't need to use single quotes.
}
