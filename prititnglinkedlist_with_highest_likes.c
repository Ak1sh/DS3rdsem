#include<stdlib.h>
#include <stdio.h>
#include<string.h>
struct node*head=NULL;
struct node{
    int likes;
    int number;
    char name[20];
    struct node*next;
    struct node*prev;
};
void insert_at_end(int likes,int number,char *n)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("Can't Insert\n");
    }
    else
    {
        ptr->likes=likes;
        strcpy(ptr->name,n);
        ptr->number=number;
        printf("Inserted\n");
        if(head==NULL)
        {
            ptr->prev=NULL;
            ptr->next=NULL;
            head=ptr;
        }
        else
        {
            struct node*tem=head;
            while(tem->next!=NULL)
            {
                tem=tem->next;
            }
            ptr->next=NULL;
            ptr->prev=tem;
            tem->next=ptr;
        }
    }
}

void display()
{
    struct node *temp=head;
    int max=head->likes;
    struct node *maxindex;
    while(temp!=NULL)
    {
        
        if(max<temp->likes)
        {
        max=temp->likes;
        maxindex=temp;
        }
        temp=temp->next;
        
    }
    printf("Name:%s\n",maxindex->name);
    printf("Likes:%d\n",maxindex->likes);
    printf("Number:%d",maxindex->number);
    
    printf("\n");
}
int main()
{
    int s,i=0,likes,number;
    char name[20];
    char*p;
    while(i!=-1){
    printf("1.Insert the data\n2.Display details of friend with highest number of likes\n3.Exit\n");
    printf("Enter your choice :");
    scanf("%d",&s);
    switch(s)
    {
        case 1:
        printf("Enter the name:");
        scanf("%s",name);
        p=&name[0];
        printf("Enter the number:");
        scanf("%d",&number);
        printf("Enter the no of likes:");
        scanf("%d",&likes);
        insert_at_end(likes,number,p);
        break;
        
        case 2:
        display();
        break;
        
        case 3:
        exit(0);
        break;
        
        default:
        printf("Invalid choice");
        break;
     }
    }
    return 0;
}
