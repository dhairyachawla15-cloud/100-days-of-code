//Q26: Write a program to print numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/

#include<stdio.h>
int main ()
	{
		int num,count;
		printf("Enter number to print :");
		scanf("%d",&num);
		
		printf("\nNatural numbers from 1 to %d are:\n",num);
		
		for(count=1; count<=num; count ++)
		{ printf("%d\n",count);
		}
		
		return 0;
	}