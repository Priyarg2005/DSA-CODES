#include<stdio.h>
#define COUNT 10
struct node
{
    int data;
    struct node *left,*right;
};
struct node *insert(struct node *node, int);
struct node *newNode(int item);
int main()
{
    int n,data,i;
    struct node *root = NULL;
    printf("Enter the number of nodes to be inserted\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the data to be inserted\n");
        scanf("%d",&data);
        root = insert(root,data);
    }
    print2D(root);
    printf("\nInorder traversal\n");
    inorder(root);
    printf("\nPreorder traversal\n");
    preorder(root);
    printf("\nPostorder traversal\n");
    postorder(root);
    return 0;
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
struct node *insert(struct node *node, int key)
{
    if (node == NULL)
    return newNode(key);
    if (key < node->data)
      node->left = insert(node->left, key);
    else
       node->right = insert(node->right, key);
    return node;
}
struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
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

