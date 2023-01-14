// NAME : SHAIKH MOHD RAZA MOHD RAFIQUE
// ROLL : 20CO53

//	Exp 01: To implement & compare compleity analysis of INSERTION AND SELETION

/*
Aim : 
		In this experiment we will write programms for insertion and selection.
		Then we will find out the time complexity for both process. 
*/
// Program for Insertion:
#include<stdio.h>
void main ()
{
    int k,j,key;
    int ar[] ={30,20,50,90,100,5};
    for(k=1;k<6;k++)
    {
        key = ar[k]; //Taking key element.
        
        // Now we will compare key element with its left side element.
        // If it that element will be bigger than key element we will shift 
        // that element right side(we will increment its index by one.)
        
		for(j=k-1;ar[j]>key;j--)
			ar[j+1]=ar[j];
		
		// After comparing and shifting,As condition fail at j so j+1 
		// index will be empty.so at index j+1 we will store the key element.
        ar[j+1]=key;
        
    }
    
    // Now we will print the numbers in increasing order.
    printf("Increasing Order:\n");    
	for(k=0;k<6;k++)
    printf("%d\t",ar[k]);

}


/*
Complexity analysis of Insertion:

		Code									Time
	int k,j,key;								1 unit.
    int ar[] ={30,20,50,90,100,5};				1 unit.
    for(k=1;k<6;k++)							(n-1) unit.
	key = ar[k];								(n-1) unit.
	for(j=k-1;ar[j]>key;j--)					(n-1)(n-1)=n²-2n+1 unit.	
	ar[j+1]=ar[j];								(n-1)(n-1)=n²-2n+1 unit.
	ar[j+1]=key;								(n-1) unit.	
	printf("Increasing Order:\n");				1 unit.	    
	for(k=0;k<6;k++)							(n-1) unit.
    printf("%d\t",ar[k]);						(n-1) unit.

	Since the highest power of n is 2
	Worst Case Time Complexity : O(n²)

*/



