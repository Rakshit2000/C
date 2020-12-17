#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *top = NULL;

void push(int data)
{
	struct node *new_node = (struct node *)malloc(sizeof(struct node));

	if(!new_node)
	{
		printf("\nOverlflow!!\n");
		exit(0);
	}
	else
	{
		new_node->data = data;
		new_node->next = top;
		top = new_node;
	}
}

int isempty()
{
	return top == NULL;
}

int peek()
{
	return top->data;
}

void pop()
{
	int data;
	struct node *temp;
	if(top == NULL)
	{
		printf("\nUnderflow!!\n");
		exit(0);
	}
	else
	{
		temp = top;
		
		top = temp->next;
	
		temp->next = NULL;
		free(temp);
		
	}
	

	
}

void display(int data)
{
	
	struct node *temp;
	if(top == NULL)
	{
		printf("\nUnderflow!!\n");
		exit(0);
	}
	else
	{
		temp = top;
		while(temp != NULL)
		{
			printf("%d->",temp->data);
			temp = temp->next;
		}
	
	}

}

int main()
{
	int n,i,data;
	printf("Enter the total nodes to be inserted in a stack: ");
	scanf("%d",&n);

	printf("Enter the data: ");

	for(i=0; i<n; i++)
	{
		scanf("%d",&data);
		push(data);
	}
	printf("Elements present in the stack are: ");
	display(data);
	
	printf("\nTop element is: %d", peek());

        pop();
	printf("\nElements in the stack after pop operation:");
	display(data);
	
	printf("\nTop element is: %d ", peek());

	

	return 0;
}
