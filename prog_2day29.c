//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/

#include<stdio.h>
int main ()
	{
		int n,i,j;
		
		printf("Enter size of array :");
		scanf("%d",&n);
		
		int arr[n];
		printf("\nEnter elements:");
		for (i=0;i<n;i++) {
		printf("\nElements %d \n:",i+1);
		scanf("%d",&arr[i]);}
		
		int max=arr[0];
		for (i=0;i<n;i++) {
		if (max<arr[i]) 
		max=arr[i];}
	
		int min=arr[0];
		for (j=0;j<n;j++) {
			if (min>arr[j])
			min=arr[j];}
		
		printf("Max=%d Min=%d",max,min);
			
		return 0;
		
		}