#include<stdio.h>
#include<stdlib.h>
#define MaxSize 4 
  
int top=-1, stack[MaxSize];


void push()
{
    int data;
     
    if(top==MaxSize-1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter element to be inserted to the stack:");
        scanf("%d",&data);
        top += 1;
        stack[top] = data;
    }
}
  
void pop()
{
    if(top==-1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped element:  %d",stack[top]);
        top -= 1;
    }
}

void peek()
{
    if(top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("%d",stack[top]);
    }
}
  
void print()
{
     
     
    if(top==-1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for(int i=top; i >= 0; i--)
            printf("%d\n",stack[i]);
    }
}

int main()
{
    int choice;
     
    while(1)    
    {
        printf("\nOperations performed by Stack");
        printf("\n1.Push the element\n2.Pop the element\n3.Print the elements\n4.Peek\n5.End\n");
        printf("\n\nEnter the choice:");
        scanf("%d",&choice);
         
        switch(choice)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: print();
                    break;
            case 4: peek();
                    break;
            case 5: exit(0);
             
            default: printf("\nInvalid choice!!");
        }
    }
}