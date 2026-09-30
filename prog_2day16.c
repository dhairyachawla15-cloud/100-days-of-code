//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include<stdio.h>
int main ()
	{
		int n,c,s,r=0;
		
		printf("Enter a number to check :");
		scanf("%d",&n);
		c=n;
		
		while(n>0)
		{
			r=n%10;
			s=r+(s*10);
			n=n/10;
		}
		if(c==s)
		printf("Palindrome Number");
		else
		printf("Not Palindrome");
		
		return 0;
		
	}