/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
	
*/

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/

#include<stdio.h>
int main ()
	{
		int n;
		printf("Enter number :");
		scanf("%d",&n);
		
		int a=n;
		for (int i=1;i<=n;i++) {
		for (int j=1;j<=a;j++) {printf("*");}
		 
		a--;
		printf("\n"); }
		
				
	
	}
		