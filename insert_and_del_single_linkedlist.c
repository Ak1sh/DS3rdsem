#include<stdio.h>
#include<stdlib.h>
struct node *head=NULL;
struct node{
    int data;
    struct node *next;
};
void delatbegin()
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
void delatend()
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
        else{
                struct node*temp1;
        struct node *temp=head;
        while(temp->next!=NULL)
        {
          temp1=temp;
            temp=temp->next;
        }
        temp1->next=NULL;
        free(temp);

    }
}
}
void delatspecific()
{
    if(head==NULL)
    {
        printf("Empty\n");
    }
    else
    {
        int loc;
        struct node *temp=head;
        struct node*prev=temp;
         printf("Enter the location");
            scanf("%d",&loc);


            for(int i=0;i<loc-1;i++)
            {
                prev=temp;
                temp = temp->next;
                if(temp == NULL)
                {
                    printf("\ncan't insert\n");
                    return;
                }
            }
            prev->next=temp->next;
            free(temp);
    }
}
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
    }
}
}
void insertatloc(int d)
    {
        struct node *ptr = (struct node *) malloc (sizeof(struct node));
        struct node *temp;
        int i,loc;
        if(ptr == NULL)
        {
            printf("\nOVERFLOW");
        }
        else
        {

            printf("Enter the location");
            scanf("%d",&loc);
            ptr->data = d;
            temp=head;
            for(i=0;i<loc-1;i++)
            {
                temp = temp->next;
                if(temp == NULL)
                {
                    printf("\ncan't insert\n");
                    return;
                }
            }
              ptr ->next = temp ->next;
            temp ->next = ptr;
            printf("\nNode inserted");
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
}
int main()
{
     int s;
    while(1)
    {
        int a;
    printf("1.insert from beginning\n");
    printf("2.insert from end\n");
    printf("3.Display the elements\n");
    printf("4.insert at specific position\n");
    printf("5.delete from beginning\n");
    printf("6.delete from end\n");
    printf("7.Del at specific pos");
    printf("8.Exit\n");
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
        printf("Enter the element \n");
        scanf("%d",&a);
        insertatloc(a);
        break;
        case 5:
            delatbegin();
            break;
        case 6:
            delatend();
            break;
        case 7:
            delatspecific();
            break;
        case 8:
        exit(0);
        break;

        default:
        printf("Invalid choice\n");
         break;
    }
    }
}





