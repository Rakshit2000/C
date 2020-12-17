/*
Time Complexity
heapify() - O(logn)
Overall = heapify*buildheap()  - O(nlogn)

*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void swap(int *x, int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
void maxheapify(int arr[], int n, int i)
{
	int largest = i;
	int l=2*i+1; // for left node
	int r=2*i+2; // for right node
    
    //If left non leaf node is larger 
	if(l<n && arr[l]>arr[largest])
		largest=l;
	
	//If right non leaf node is larger 
	if(r<n && arr[r]>arr[largest])
		largest=r;
	//If root node is not largest
	if(largest !=i){
	    swap(&arr[i], &arr[largest]);
    // Recursively call because our binary tree is affected
    maxheapify(arr,n,largest);
	}

}
void heapsort(int arr[], int n)
{
	for(int i=n/2 -1;i>=0;i--)
	{
		maxheapify(arr,n,i);
	}
	for(int i=n-1;i>0;i--)
	{
		swap(&arr[0],&arr[i]);
		maxheapify(arr,i,0);
	}
}
int main()
{
	int *arr,n,i;
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
	heapsort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
