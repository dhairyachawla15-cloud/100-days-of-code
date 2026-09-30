//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

int main() 
	{
    int n1,n2;
    int merged[200];
    int mergedSize = 0;
    int isDuplicate;
	
	printf("\nEnter size of 1st array :");
	scanf("%d",&n1);
	
	printf("\nEnter size of 2nd array :");
	scanf("%d",&n2);

	int arr1[100];
    printf("\nEnter elements of 1st array :");
    for (int i=0;i<n1;i++) {
        printf("\nElement %d :",i+1);
		scanf("%d",&arr1[i]);
    }
	int arr2[100];
    printf("\nEnter elements of 2nd array:");
    for (int i=0;i<n2;i++) {
		 printf("\nElement %d :",i+1);
        scanf("%d",&arr2[i]);
    }

    for (int i=0;i<n1;i++) {
        isDuplicate = 0;
        for (int j=0;j<mergedSize;j++) {
            if (arr1[i]==merged[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (isDuplicate == 0) {
            merged[mergedSize]=arr1[i];
            mergedSize++;
        }
    }

    for (int i=0;i<n2;i++) {
        isDuplicate=0;
        for (int j=0;j<mergedSize;j++) {
            if (arr2[i]==merged[j]) {
                isDuplicate=1;
                break;
            }
        }
        if (isDuplicate==0) {
            merged[mergedSize]=arr2[i];
            mergedSize++;
        }
    }

    for (int i=0;i<mergedSize;i++) {
        printf("%d",merged[i]);
    }
    printf("\n");

    return 0;
}
