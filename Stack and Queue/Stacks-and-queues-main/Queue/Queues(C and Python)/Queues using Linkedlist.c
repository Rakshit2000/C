#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *front = NULL, *rear = NULL;

void enqueue(int data)
{
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = data;

	if(front == 0 && rear == 0)
	{
		front = rear = new_node;
		front->next = rear->next = NULL;
	}
	else
	{
		rear->next = new_node;
		rear = new_node;
		new_node->next = NULL;
	}


}

void dequeue()
{
	struct node *temp;
	if(front == NULL)
	{
		printf("\nOverflow!!");
	}
	else
	{
        temp = front;
        front = front->next;
        printf("\nDeleted element: %d\n", temp->data);
        free(temp);
	}
}

void display(int data)
{
	struct node *temp = front;
	if(front == NULL)
	{
		printf("\nEmpty queue\n");
	}
	else
	{
		while(temp != NULL)
		{
			printf("%d ",temp->data);
			temp = temp->next;
		}
	}
}

int main()
{
	int n,i,data;
	printf("Enter the number of nodes to be inserted into a queue: ");
	scanf("%d",&n);

	printf("Enter the data: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		enqueue(data);
	}

	printf("Elements present in the queue are: ");
	display(data);

	dequeue();

	printf("\nElements in the queue after dequeue operation:");
	display(data);

}