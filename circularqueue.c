
#include <stdio.h>
#include<stdlib.h>
#define SIZE 3
int front=-1,rear=-1;
int num[SIZE];

int isfull()
{
    if((rear==front+1) || (rear==SIZE-1 && front ==0))
        return 1;
    else 
        return 0;
}
int isempty()
{
    if(front==-1 )
    return 1;
    else
    return 0;
}
void Enqueue(int a)
{
    if(isfull()==1){
    printf("The queue is full\n");
    }
    else if(isempty()==1)
{
    front=0;
    rear=0;
    num[rear]=a;
    printf("Suceesfully entered\n");
}
else
{
    rear =(rear+1)%SIZE;
    num[rear]=a;
    printf("Suceesfully entered\n");
}}

void Deque()
{
    if(isempty()==1)
    printf("The queue is empty\n");
    else if(front ==rear)
    {
        rear=front=-1;
        printf("Sucessfully dequed\n");
    }
    else
    {
        front=(front+1)%SIZE;
        printf("Sucessfully dequed\n");
    }
    
}
void Display()
{
    if(isempty()==1)
    printf("The queue is empty\n");
    else
    {
    int i=front;
   
        while(i!=(rear))
        {
            
            printf("%d ",num[i]);
            i=(i+1)%SIZE;
            
        }
        printf("%d \n",num[i]);
    }
}
int main()
{
    int s;
    while(1)
    {
        int a;
    printf("1.Add the element to queue\n");
    printf("2.Deque an element\n");
    printf("3.Display the elements\n");
    printf("4.Exit\n");
    printf("Enter your choice\n");
    scanf("%d",&s);
    switch(s)
    {
        case 1:
        
        printf("Enter the element to be queued ");
        scanf("%d",&a);\
        Enqueue(a);
        break;
        
        case 2:
        Deque();
        break;
        
        case 3:
        Display();
        break;
        
        case 4:
        exit(0);
        break;
        
        default:
        printf("Invalid choice\n");
        
    }
    }

    return 0;
}
