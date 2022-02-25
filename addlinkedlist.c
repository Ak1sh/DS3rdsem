#include <stdio.h>
#include<stdlib.h>
#include<string.h>
 struct node*finalhead=NULL;
struct node
{
  int data;
  struct node*next;
 
};
struct node* insert(struct node**head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("cant insert");
    }
    else
    {
        ptr->data=data;
        if(head==NULL)
        {
            *head=ptr;
            ptr->next=NULL;
        }
        else
        {
            ptr->next=*head;
            *head=ptr;
        }
    }
}

void display(struct node*head)
{
    struct node*temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void add(struct node*head1,struct node*head2)
{
    int carry=0;
    while(head1!=NULL || head2!=NULL||carry!=0)
    {
        int sum=0;
        if(head1!=NULL)
        {
        sum+=head1->data;
        head1=head1->next;
        }
        if(head2!=NULL)
        {
        sum+=head2->data;
        head2=head2->next;
        }
        sum+=carry;
        carry=sum/10;
        insert(&finalhead,(sum%10));
    }
}
int main()
{
    struct node*head1=NULL;
    struct node *newhead=NULL;
    char s1[20],s2[20];
    gets(s1);
    printf("\n");
    gets(s2);
    
    for(int i=0;i<strlen(s1);i++)
        insert(&head1,(s1[i]-'0'));
    
    for(int i=0;i<strlen(s2);i++)
    insert(&newhead,(s2[i]-'0'));
    add(head1,newhead);
    display(finalhead);
    return 0;
}
