/*
Binary search in a sorted array and it is also called  - Divide and Conquer priniple

Time complexity :

1) Best case: O(1)

2) Worst case: O(log n)

*/

#include<stdio.h>
#include<stdlib.h>
int binarySearch(int arr[], int n, int key)
{
	int lindex = 0, rindex = n-1, mid;

	while(lindex<rindex)
	{
		mid = (lindex+rindex)/2;

		if(key == arr[mid])
		{
			return mid;
		}
		else if(key < arr[mid])
		{
			rindex = mid - 1;
		}
		else
		{
			lindex = mid + 1;
		}
	}
	return -1;
}

int main()
{
	int *arr,n,i,key;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	printf("Enter the value to be searched: ");
	scanf("%d",&key);
	arr = (int *)malloc(n*sizeof(int));
	if(arr==NULL)
	{
		printf("Error! Memory is not allocated");
		exit(0);
	}
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int foundindex = binarySearch(arr,n,key);
	
	if(foundindex==-1)
	{
	    printf("Element not present.");
	}
	else
	{
	    	printf("Element found at index: %d",foundindex);
	}

	

	return 0;
}