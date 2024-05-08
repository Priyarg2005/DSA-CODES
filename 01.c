#include<stdio.h>
#include<stdlib.h>
#define COUNT 10
struct node
{
    int data;
    struct node *left,*right;
};
struct node *newnode(int);
struct node *insert(struct node *,int);
int inorder(struct node *);
int preorder(struct node *);
int postorder(struct node *);
void print2D(struct node *);
void print2DUtil(struct node *,int );
struct node *deletenode(struct node *root,int key);
void largest(struct node *root);
void smallest(struct node *root);
int main()
{
    struct node *root = NULL;
    int n,d,i,l;
    printf("Enter the number of nodes to be inserted\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("Enter the data\n");
       scanf("%d",&d);
       root=insert(root,d);
    }
    print2D(root);
    printf("\n\nInorder traversal\n");
    inorder(root);
    printf("\nPreorder traversal\n");
    preorder(root);
    printf("\nPostorder traversal\n");
    postorder(root);
    printf("\n\nEnter a node to delete\n");
    scanf("%d",&l);
    root = deletenode(root,l);
    print2D(root);
    printf("\n\nLargest element of the tree\n");
    largest(root);
    printf("\n\nSmallest element of the tree\n");
    smallest(root);
    return 0;
}
struct node *newnode(int key)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data = key;
    temp->left = temp->right = NULL;
    return temp;
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
struct node *insert(struct node *node,int d)
{
    if(node == NULL)
     return newnode(d);
     if(d <node->data)
     node->left = insert(node->left,d);
     else
     node->right = insert(node->right,d);
     return node;
}
int inorder(struct node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}
int preorder(struct node *root)
{
    if(root != NULL)
    {
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
int postorder(struct node *root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->data);
    }
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
void largest(struct node *root)
{
    while (root != NULL && root->right != NULL)
    {
        root = root->right;
    }
    printf("\nLargest value is %d\n", root->data);
}
void smallest(struct node *root)
{
   while (root != NULL && root->left != NULL)
    {
        root = root->left;
    }
    printf("\nSmallest value is %d\n", root->data);

}
