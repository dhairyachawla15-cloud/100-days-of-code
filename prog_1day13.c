//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include<stdio.h>
int main ()
	{
		float n1=0, n2=0;
		char oper;
		printf("=== Calculator ===");
		printf("\n+ for addition");
		printf("\n- for subtraction");
		printf("\n* for multiplication");
		printf("\n/ for division");
		printf("\nPlease enter the operation (symbol):\n");
		scanf("%c",&oper);
		
		printf("Please enter the n1 :");
		scanf("%f",&n1);
		
		printf("Please enter the n2 :");
		scanf("%f",&n2);
		
		switch (oper)
		{
		case '+': printf("\n Addition: %.2f + %.2f = %.2f",n1,n2,n1+n2);
		break;
		
		case '-': printf("\n Subtraction: %.2f - %.2f = %.2f",n1,n2,n1-n2);
		break;
		
		case '*':printf("\n Multiplication: %.2f x %.2f = %.2f",n1,n2,n1*n2);
		break;
		
		case '/':printf("\n Division: %.2f / %.2f = %.2f",n1,n2,n1/n2);
		break;
		
		default: printf("\nInvalid command\n");
		
		return 0;
		
		}
		
	}
			
			
		
		
		
		
		
		
		
		
		
		