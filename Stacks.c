#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define SIZE 10
int arr[SIZE];
int top = -1;
int isEmpty()
{
    if(top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
} 
int isFull()
{
    if(top == SIZE)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void push(int k)
{
    if(isFull())
    {
        printf("Stack is full");
        }
        else
        {
            arr[++top] = k;
            printf("inserted\n");
            }
} 
void pop()
{
    if(isEmpty())
    {
        printf("Stack is empty");
        
    }
    else
    {
        arr[top--];
        printf("Deleted");
}
}
void display()
{
    if(isEmpty())
    {
        printf("Empty stack");
    }
    else
    {
    for(int i=top;i>=0;i--)
    {
        printf("%d",arr[top]);
    }
}
}
int main()
{
    int entry,num,elem;
    do{
    printf("Enter the operation to be performed: \n");
    printf("1 for push to stack\n");
    printf("2 to pop from stack\n");
    printf("3 to display stack \n");
    printf("4 to exit\n");
    scanf("%d",&entry);
    switch (entry)
      {
      case 1:
      printf("Enter the number to be pushed: ");
      scanf("%d",&num);
      push(num);
      break;
      case 2:
      pop();
      break;
      case 3:
      display();
      break;
      case 4:
      exit(0);
      break;
      }
    }
    while(entry != 4);
    return 0;
}


