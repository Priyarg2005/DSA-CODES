#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *left, *right;
    int key;
};
struct node *newNode(int item);
int inorder(struct node *root);
struct node *insert(struct node *node, int key);
struct node *minValueNode(struct node *node);
int main()
{
    struct node *root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    printf("in order traversal of given tree \n");
    inorder(root);
    return 0;
}
struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
int inorder(struct node *root)
{
    if (root != NULL)
    {
       inorder(root->left);
        printf("%d\t", root->key);
       inorder(root->right);
     }
}
struct node *insert(struct node *node, int key)
{
    if (node == NULL)
    return newNode(key);
    if (key < node->key)
      node->left = insert(node->left, key);
    else
       node->right = insert(node->right, key);
    return node;
}
struct node *minValueNode(struct node *node)
{
    struct node *current = node;
    while (current->left != NULL)
    {
      current = current->left;
     }
return current;
}
