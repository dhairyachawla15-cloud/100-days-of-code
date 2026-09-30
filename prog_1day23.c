/* Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****


/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/

#include<stdio.h>
int main ()
	{
		int n;
		printf("Enter number :");
		scanf("%d",&n);
		
		for (int i=1;i<=n;i++) {
		for (int i=1;i<=n;i++) { printf("*"); }
		
		printf("\n");
		}
		
		return 0;
		
	}