#include<stdio.h>
#include<malloc.h>
#define COUNT 10
struct node
{
    int data;
    struct node *left,*right;
};
struct node *deletenode(struct node *root,int key);
struct node *newnode(int data)
{
    struct node *node;
    node=(struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
void print2DUtil(struct node *root,int space)
{
    int i;
    if(root == NULL)
    {
        return ;
    }
    space += COUNT;
    print2DUtil(root->right,space);
    printf("\n");
    for(i=COUNT ; i<space; i++)
       printf(" ");
    printf("%d\n",root->data);
    print2DUtil(root->left,space);
}
void print2D(struct node *root)
{
    print2DUtil(root,0);

}
int main()
{
    int l;
    struct node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->right->left = newnode(6);
    root->right->right = newnode(7);
    root->left->left->left = newnode(8);
    root->left->left->right = newnode(9);
    root->left->right->left = newnode(10);
    root->left->right->right = newnode(11);
    root->right->left->left = newnode(12);
    root->right->left->right = newnode(13);
    root->right->right->left = newnode(14);
    root->right->right->right = newnode(15);
    print2D(root);
    printf("\n\nEnter a node to delete\n");
    scanf("%d",&l);
    root = deletenode(root,l);
    print2D(root);
    return 0;
}
struct node *deletenode(struct node *root,int key)
{
  if(root==NULL)
    {
        return root;
    }
    if(key <root->data)
    {
        root->left = deletenode(root->left,key);
    }
    else if(key > root->data)
    {
        root->right = deletenode(root->right,key);
    }
    else
    {
        if(root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
           struct node *temp = root->left;
           free(root);
           return temp;
        }
    }
    return root;
}



