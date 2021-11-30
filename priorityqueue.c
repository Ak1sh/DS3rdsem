//Program of priority queue where least number gets more priority
#include<stdlib.h>
#include <stdio.h>
#define size 10
int queue[size];
int front,rear=-1;

int insert(int a)
{
    if(front ==-1)
    {
        queue[++rear]=a;
        front =0;
    }
    else if( rear==size-1)
    {
        printf("Full");
    }
    else
    {
        queue[++rear]=a;
    }
    
}
int deque()
{
    if(front==-1)
    {
        printf("Empty");
    }
    else if( rear==front)
    {
        rear=front=-1;
    }
    else
    {
        
        front++;
        printf("Dequed \n");
    }
    
}
int sort()
{
    for(int i=0;i<=rear;i++)
        {
            int max=i;
            for(int j=i+1;j<=rear;j++)
            {
                int k=0;
            if(queue[max]>queue[j])
            {
                k=queue[max];
                queue[max]=queue[j];
                queue[j]=k;
            }
            }
        }
}
int display()
{
    if(front==-1)
    {
        printf("Empty");
        
    }
    else
    {
        sort();
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
        printf("\n");
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
    printf("Enter your choice :");
    scanf("%d",&s);
    switch(s)
    {
        case 1:
        
        printf("Enter the element to be queued :");
        scanf("%d",&a);\
        insert(a);
        break;
        
        case 2:
       
        deque();
        break;
        
        case 3:
      
        display();
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
