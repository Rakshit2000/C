
/* Linear or Sequential Search in a sorted array..

Time Complexity:

1) Best case - O(1)
2) Worst case - O(n)

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,key,n,i;
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("Error!");
        exit(0);
    }
    printf("Enter the value to be searched: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("Element %d at index %d is present.",arr[i],i);
            break;
        }
    }
    if(i==n)
    {
        printf("Element is not present");
    }
    
    return 0;
}
