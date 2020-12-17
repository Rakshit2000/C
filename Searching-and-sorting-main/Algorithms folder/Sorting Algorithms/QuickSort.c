/*
Time complexity:
Worst case - O(n2)
Best case - O(nlog(n))
*/

#include<stdio.h>
#include<stdlib.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp=*yp;
	*yp=temp;
}

int partition(int arr[], int l, int h)
{
	int pivot = arr[l];
	int i = l, j=h;
	while(i<j)
	{
		do
		{
			i++;
		}
		while(arr[i]<=pivot);
		do
		{
			j--;
		}
		while(arr[j]>pivot);
		if(i<j)
		{
			swap(&arr[i], &arr[j]);
		}
		
	}
	swap(&arr[l], &arr[j]);
		
	return j;
	
}

void quicksort(int arr[], int l, int h)
{
	if(l<h)
	{
		int p = partition(arr,l,h);
		quicksort(arr,l,p);
		quicksort(arr,p+1,h); 
	}
} 

int main()
{
	int *arr,n,i;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	arr = (int *)malloc(n*sizeof(int));
	if(arr==NULL)
	{
		printf("Error!");
		exit(0);
	}
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	quicksort(arr,0,n);

	printf("The sorted array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
