//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include <stdio.h>

int main() 
{
    int n,i;
	int arr[100];
	
	printf("Size of Array :");
	scanf("%d",&n);
	
	printf("\nEnter the elements :\n");
	for (i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	
	int sum=0;
	for (int i=0;i<n;i++) {
	sum=sum+arr[i];}
	
	printf("Sum of the array is %d ",sum);
	
	return 0;
}

		
		
		
		
		
		

		