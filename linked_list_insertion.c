#include<stdio.h>
#include<stdlib.h>
struct node *head=NULL;
struct node{
    int data;
    struct node *next;
};

void atbegin(int d)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("Overflow\n");
    }
    else
    {
        ptr->data=d;
        ptr->next=head;
        head=ptr;
    }
}
void atend(int d)
{
   
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("Overflow\n");
    }
    else
    {
     ptr->data=d;
    if(head==NULL)
    {
        
        ptr->next=NULL;
        head=ptr;
    }
    else{
    struct node *temp=head;
    while (temp->next != NULL) 
    {
            temp = temp->next;  
    }
    temp->next=ptr;
    ptr->next=NULL;
    }}
}
void display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
     int s;
    while(1)
    {
        int a;
    printf("1.from beginning\n");
    printf("2.from end\n");
    printf("3.Display the elements\n");
    printf("4.Exit\n");
    printf("Enter your choice\n");
    scanf("%d",&s);
    switch(s)
    {
        case 1:
        
        printf("Enter the element \n");
        scanf("%d",&a);
        atbegin(a);
        break;
        
        case 2:
        printf("Enter the element \n");
        scanf("%d",&a);
        atend(a);
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
