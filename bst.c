#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;
struct node *temp=NULL;
struct node* create (struct node *root,int value);
void display(struct node *root);
void predisplay(struct node *root);
void postdisplay(struct node *root);
struct node* findmin(struct node* root);
struct node *findmax(struct node *root);
struct node * delete(struct node *root ,int value);
int main()
{
    int n;
    while(1)
    {
        printf("enter 1 for create , 2 for inorder ,3 for preorder,4 for post order, 5 for find min , 6 for find max ,7 for delete ,8 for exit");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            {
                int value;
                printf("enter value to insert ");
                scanf("%d",&value);
                root=create(root,value);
                break;
            }
            case 2:{
                display(root);
                printf("\n");
                break;
            }
            case 3:{
                predisplay(root);
                printf("\n");
                break;
            }
            case 4:{
                postdisplay(root);
                printf("\n");
                break;
            }
            case 5:{
                temp=findmin(root);
                printf("min= %d\n",temp->data);
                break;
            }
            case 6:{
                temp=findmax(root);
                printf("max = %d\n",temp->data);
                break;
            }
            case 7:{
                int value;
                printf("enter element to delete");
                scanf("%d",&value);
                temp=delete(root,value);
                printf("deleted = %d",temp->data);
                break;
            }
            case 8:{
                exit(1);
            }
        }
    }
    return 0;
}
struct node* create (struct node *root,int value)
{
    temp=(struct node*) malloc(sizeof(struct node));
    temp->data=value;
    if(root==NULL)
    {
        root=temp;
        root->left=NULL;
        root->right=NULL;
    }
    else if(temp->data<root->data)
    {
        root->left=create(root->left,value);
    }
    else
    {
        root->right=create(root->right,value);
    }
    return root;
}
void display(struct node *root)
{
    if(root!=NULL)
    {
        display(root->left);
        printf("%d\t",root->data);
        display(root->right);
    }
}
void predisplay(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->data);
        predisplay(root->left);
       
        predisplay(root->right);
    }
}

void postdisplay(struct node *root)
{
    if(root!=NULL)
    {
   
        postdisplay(root->left);
       
        postdisplay(root->right);
        printf("%d\t",root->data);
    }
}
struct node *findmin(struct node *root)
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(root->left==NULL)
    {
        return root;
    }
    else
    {
        findmin(root->left);
    }
}
struct node * findmax(struct node *root)
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(root->right==NULL)
    {
        return root;
    }
    else
    {
        findmax(root->right);
    }
}


struct node* delete(struct node* root, int data)
{
   
    if (root == NULL)
        return root;
    if (data < root->data)
    root->left = delete(root->left, data);
    else if (data > root->data)
    root->right = delete(root->right, data);
    else
    {
       
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        struct node* temp = findmin(root->right);
        root->data = temp->data;
        root->right = delete(root->right, temp->data);
    }
    return root;
}

//output 

/*enter 1 for create , 2 for inorder ,3 for preorder,4 for post order, 5 for find min , 6 for find max ,7 for delete ,8 for exit1
enter value to insert 7
enter 1 for create , 2 for inorder ,3 for preorder,4 for post order, 5 for find min , 6 for find max ,7 for delete ,8 for exit
9
enter 1 for create , 2 for inorder ,3 for preorder,4 for post order, 5 for find min , 6 for find max ,7 for delete ,8 for exit1
enter value to insert 94
enter 1 for create , 2 for inorder ,3 for preorder,4 for post order, 5 for find min , 6 for find max ,7 for delete ,8 for exit1
enter value to insert 7
enter 1 for create , 2 for inorder ,3 for preorder,4 for post order, 5 for find min , 6 for find max ,7 for delete ,8 for exit4
7       94      7 */