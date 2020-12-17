/*
Time complexity:
Best Case - O(n)
Worst Case - O(nlogn)
*/

#include<stdio.h>
#include<stdlib.h>

void merge(int arr[], int l, int mid, int h)
{
	int i,j,k;
	int n1 = mid-l+1;
	int n2 = h-mid;


	int L[n1],R[n2];
	for(i=0;i<n1;i++)
	{
		L[i] = arr[l+i];

	}
	for(j=0;j<n2;j++)
	{
		R[j] = arr[mid+l+j];
	}
	i=0,j=0,k=0;

	while(i<n1 && j<n2)
	{
		if(L[i]<R[j])
		{
			arr[k]=L[i];
		    i++;
		    k++;

		}
		else
		{

			arr[k]=R[j];
			j++;
			k++;
		}
	}
	while(i<n1)
	{
		arr[k]=L[n1];
        i++;
		k++;
	}
	while(j<n2)
	{
		arr[k]=R[j];
		j++;
		k++;
	}
}

void mergesort(int arr[], int l, int h)
{
	if(l<h)
	{
		int mid = l+(r-1)/2;

		mergesort(arr,l,mid);
		mergesort(arr,mid+1,h);
		merge(arr,l,mid,h);
	}
}

int main()
{
	int n,i,*arr;
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	if(arr==NULL)
	{
		printf("Error!");
		exit(0);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	mergesort(arr,0,n);
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}