//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include<stdio.h>
int main ()
{
	int l,b;
	int sum,mul;
	printf("Hello! Enter Length and Breadth");
	scanf("%d%d",&l,&b);
	sum=2*(l+b);
	mul=l*b;
	printf("Perimeter=%d,Area=%d",sum,mul);
	return 0;
}