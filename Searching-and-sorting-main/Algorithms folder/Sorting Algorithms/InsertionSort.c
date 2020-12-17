/*
Time Complexity:
1) Best Case - O(n)
2) Worst Case - O(n2)
*/

#include<stdio.h>
#include<stdlib.h>
int insertionsort(int arr[], int n)
{
	int i,temp,j;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
	return -1;
}

int main()
{
	int n,i,*arr;
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	if(arr==NULL)
	{
		printf("ERROR!");
		exit(0);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertionsort(arr,n);
	for(i=0;i<n;i++)
	{
	    printf("%d ",arr[i]);
	}

	return 0;
}