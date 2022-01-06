#include<stdio.h>
#include<stdlib.h>
struct node *head=NULL;
struct node*head1=NULL;
struct node{
    int data;
    struct node *next;
};
void delatbegin()
{

    if(head1==NULL)
    {
        printf("Empty\n");
    }
    else
    {
        if(head1->next==NULL)
        {
            free(head1);
        }
       else
       {
           struct node*temp=head1;
        head1=head1->next;
        free(temp);

    }
}
}
void delatbeginofqueue()
{

    if(head==NULL)
    {
        printf("Empty\n");
    }
    else
    {
        if(head->next==NULL)
        {
            free(head);
        }
       else
       {
           struct node*temp=head;
        head=head->next;
        free(temp);

    }
}
}
void atbegin(int d)
{
    struct node *ptr1=(struct node*)malloc(sizeof(struct node));
    if(ptr1==NULL)
    {
        printf("Overflow\n");
    }
    else
    {
        ptr1->data=d;
        ptr1->next=head1;
        head1=ptr1;
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
    }
}
}
void display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void displaystack()
{
    struct node *temp=head1;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
     int s;
    while(1)
    {
        int a;
    printf("1.Push\n");
    printf("2.Enqueue\n");
    printf("3.Display the elements of stack\n");
    printf("4.deque\n");
    printf("5.pop\n");
    printf("6.Display the elements of queue\n");
    printf("7.Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&s);
    switch(s)
    {
        case 1:

        printf("Enter the element: ");
        scanf("%d",&a);
        atbegin(a);
        break;

        case 2:
        printf("Enter the element: ");
        scanf("%d",&a);
        atend(a);
        break;

        case 3:
        displaystack();
        break;
        case 4:
            delatbeginofqueue();
            break;
        case 5:
            delatbegin();
            break;
            case 6:
            display();
            break;
        case 7:
        exit(0);
        break;

        default:
        printf("Invalid choice\n");
         break;
    }
    }
}




