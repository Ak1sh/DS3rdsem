
#include <stdio.h>
#include<stdlib.h>
int max=0,flag=0;
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node *create()
{
    int data;
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter the number :");
    scanf("%d",&data);
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}
int search(struct node*root,int key)
{
     if(root==NULL)
     return -1;
    if(root->data==key)
    return root->data;
    if(root->data>key)

      search(root->left,key);

    if(root->data<key)

        search(root->right,key);
}
void inorder(struct node*root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}
void preorder(struct node*root)
{
    if(root==NULL)
    return;
    if(max<root->data)
    max=root->data;
    preorder(root->left);
    preorder(root->right);
    
}
void postorder(struct node*root)
{
    if(root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
}
void insert(struct node *root,struct node*ptr)
{
        if((ptr->data)<(root->data))
        {
            if(root->left!=NULL)
            insert(root->left,ptr);
            else
            root->left=ptr;
        }
        if((ptr->data)>(root->data))
        {
            if(root->right!=NULL)
            insert(root->right,ptr);
            else
            root->right=ptr;
        }
    }
int main() 
{
    struct node*root=NULL;
     struct node *ptr;
    for(int i=0;i<5;i++)
    {
      ptr=create();
       if(root == NULL){
            root = ptr;
        }
        else{
            insert(root,ptr);
        }
    }
    preorder(root);
    printf("%d",max);
   int res=search(root,4);
   if(res!=-1)
    printf("found %d",res);
    return 0;
}
