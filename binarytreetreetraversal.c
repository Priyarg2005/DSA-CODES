#include<stdio.h>
#include<malloc.h>
#define COUNT 10
struct node
{
    int data;
    struct node *left,*right;
};
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
    printf("\nInorder traversal\n");
    inorder(root);
    printf("\nPreorder traversal\n");
    preorder(root);
    printf("\nPostorder traversal\n");
    postorder(root);
}
int inorder(struct node *root)
{
    if (root != NULL)
    {
       inorder(root->left);
       printf("%d\t", root->data);
       inorder(root->right);
     }
}
int postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t", root->data);
     }
}
int preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d\t", root->data);
        preorder(root->left);
        preorder(root->right);
     }
}
