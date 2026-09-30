//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include<stdio.h>
int main ()
	{
		int n,i;
		printf("Enter size of array :");
		scanf("%d",&n);
		
		int arr[n];
		printf("Enter elements :");
		for (int i=0;i<n;i++) {
		printf("\nElements %d :",i+1);
		scanf("%d",&arr[i]);}
		
		int positive=0,negative=0,zero=0;
		for (i=0;i<n;i++) {
		if (arr[i]<0) {negative++;}
		else if (arr[i]>0) {positive++;}
		else {zero++;}
		}
		
		printf("Positive=%d Negative=%d Zero=%d",positive,negative,zero);
		
		return 0;
		
		}