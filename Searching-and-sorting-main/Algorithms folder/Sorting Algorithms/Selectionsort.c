/*
Time complexity: 
Best or Worst case - O(n2)

Time complexity for swap - O(n) 
*/

#include<stdio.h>
#include<stdlib.h>

void swap(int *x, int *y)
{
	int temp = *x;
	*x=*y;
	*y=temp;
}

int selectionsort(int arr[], int n)
{
	int i,j,min;
	for(i=0;i<n;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		swap(&arr[i],&arr[min]);
	}
	return 0;
}
int main()
{
	int *arr,i,n;
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selectionsort(arr,n);
	printf("Sorted array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}