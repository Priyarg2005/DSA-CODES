#include<stdio.h>
#include<stdlib.h>
struct node
{
    int key;
    struct node *left,*right;
};
struct node *newnode(int item);
int inorder(struct node *root);
struct node *insert(struct node *node,int key);
struct node *deletenode(struct node *root,int key);
int main()
{
    struct node *root = NULL;
    root = insert(root,50);
    root = insert(root,70);
    root = insert(root,60);
    root = insert(root,20);
    root = insert(root,90);
    root = insert(root,10);
    root = insert(root,40);
    printf("inorder traversal of the tree\n");
    inorder(root);
    printf("\nDelete node 20\n");
    root = deletenode(root,10);
    printf("modified in order traversal of given tree\n");
    inorder(root);
    return 0;
}
struct node *newnode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key=item;
    temp->left=temp->right=NULL;
    return temp;
}
int inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\t",root->key);
        inorder(root->right);
    }
}
struct node *insert(struct node *node,int key)
{
    if(node==NULL)
    {
        return newnode(key);
    }
    if(key<node->key)
    {
        node->left = insert(node->left,key);
    }
    else
    {
        node->right = insert(node->right,key);
    }
    return node;
}
struct node *deletenode(struct node *root,int key)
{
    if(root==NULL)
    {
        return root;
    }
    if(key<root->key)
    {
        root->left = deletenode(root->left,key);
    }
    else if(key<root->key)
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
}

