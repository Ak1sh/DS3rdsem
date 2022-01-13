
#include <stdio.h>
struct node*head=NULL;
struct node{
    int data;
    struct node*next;
    struct node*prev;
}
insert_at_begin(int d)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("Can't Insert\n");
    }
    else
    {
        data=d;
     if(head==NULL)
     {
         head=ptr;
         ptr->next=NULL;
     }
     else
     {
         ptr->next=head;
         head->prev=ptr;
         ptr->prev=NULL;
         head=ptr;
     }
    }
}
insert_at_end(int d)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("Can't Insert\n");
    }
    else
    {
        
    }
}
insert_at_specific_pos(int d)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("Can't Insert\n");
    }
    else
    {
        int t;
        printf("Enter the position to be inserted :");
        scanf("%d",&t);
    }
}
display()
{
    struct *node temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int s,d;
    while(1){
    printf("1.Insert from begin\n2.Insert from end\n3.Insert at specific position\n4.Delete from beginning\n5.Delete from end\n6.Delete at specific position\n7.Display\n8.Exit\n");
    printf("Enter your choice :");
    scanf("%d",&s);
    switch(s)
    {
        case 1:
        printf("Enter the element to be inserted:");
        scanf("%d",&d);
        insert_at_begin(d);
        break;
        
        case 2:
        printf("Enter the element to be inserted:");
        scanf("%d",&d);
        insert_at_end(d);
        break;
        
        case 3:
        printf("Enter the element to be inserted:");
        scanf("%d",&d);
        insert_at_specific_pos(d);
        break;
        
        case 4:
        del_at_begin();
        break;
        
        case 5:
        del_at_end();
        break;
        
        case 6:
        del_at_specific_pos();
        break;
        
        case 7:
        display();
        break;
        
        case 8:
        exit(0);
        break;
        
        default:
        printf("Invalid choice");
        break;
    }
    }
    return 0;
}
