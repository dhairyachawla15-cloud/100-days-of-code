//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include<stdio.h>
int main ()
	{
		int num1,num2,count=1,gcd;
		printf("Enter two numbers :");
		scanf("%d%d",&num1,&num2);
		
		while (count <= num1 && count <= num2)
		{
			if (num1%count==0 && num2%count==0)
			{
				gcd = count;
			}
			count++;
		}
		
		printf("GCD of %d and %d is %d\n",num1,num2,gcd);
		
		return 0;
	}
	