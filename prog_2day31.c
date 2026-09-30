//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

#include <stdio.h>

int main() {
    int n,i,j,temp;
    
    printf("Enter size of array: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter Elements:\n");
    for (i=0;i<n;i++) {
        printf("Element %d: ",i + 1);
        scanf("%d",&arr[i]);
    }

    i=0;
    j=n-1;
    while (i<j) {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        
        i++; 
        j--;
        
    }
    
    printf("Reversed array: ");
    for (j=0;j<n;j++) {
        printf("%d ",arr[j]); 
    }
    printf("\n");
    
    return 0;
}

		
		