//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

#include<stdio.h>
int main ()
	{
		int num,count=1,mul=1;
		printf("Enter the number to find product :");
		scanf("%d",&num);
		
		while(count<=num)
		{
			if (count%2==0)
			{mul=mul*count;}
			
		count ++;
		}
		
		printf("\nProduct of even number is %d",mul);
		
	
		
		return 0;
	}