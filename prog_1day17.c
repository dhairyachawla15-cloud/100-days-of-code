//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include<stdio.h>
int main ()
	{
		int n,arm=0,r,c;
		
		printf("Enter a number to check :");
		scanf("%d",&n);
		c=n;
		
		while(n>0)
		{
			r=n%10;
			arm=r*r*r+arm;
			n=n/10;
		}
		
		if (c==arm) printf("Armstrong number");
		
		else printf("Not an Armstrong number");
		
		return 0;
		
	}