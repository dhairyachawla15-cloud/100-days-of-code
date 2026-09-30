//Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/

#include<stdio.h>
int main ()
	{
		int num,count;
		
		printf("Enter a number to produce factors :");
		scanf("%d",&num);
		
		printf("\nFactors of %d are\n",num);
		for (count=1; count<=num; count++)
		{
			if(num%count==0)
			printf("%d\n",count);
			
		}
		
		return 0;
	}