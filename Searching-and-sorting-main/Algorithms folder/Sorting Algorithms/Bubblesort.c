/*
Time Complexity:
Best case - O(n)
Worst cse - O(n2)
*/

#include<stdio.h>
#include<stdlib.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubblesort(int arr[], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
    
            
            }
            
        }
        
    }
}
int main()
{
	int *arr,n,i;
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	if(arr==NULL)
	{
		printf("%d",&arr[i]);
		exit(0);
	}
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
    }
	bubblesort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}