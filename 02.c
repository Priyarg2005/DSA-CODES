#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *lchild;
    struct Node *rchild;
    int data;
};
struct queue
{
    int front;
    int rear;
    struct Node **array;
};
struct Node *root = NULL;
struct Node* deleteNode(struct Node* root, int data);
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->lchild = newNode->rchild = NULL;
    return newNode;
}
// Function to create a queue
struct queue *createQueue(int size)
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    if (q == NULL)
    {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    q->front = q->rear = -1;
    q->array = (struct Node **)malloc(size * sizeof(struct Node *));
    if (q->array == NULL)
    {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    return q;
}

// Function to check if the queue is empty
int isEmpty(struct queue *q)
{
    return q->front == -1;
}

// Function to enqueue a node into the queue
void enqueue(struct queue *q, struct Node *node)
{
    if (isEmpty(q))
    {
        q->front = q->rear = 0;
    }
    else
    {
        q->rear++;
    }
    q->array[q->rear] = node;
}
// Function to dequeue a node from the queue
struct Node *dequeue(struct queue *q)
 {
    struct Node *node = q->array[q->front];
    if (q->front == q->rear)
    {
        q->front = q->rear = -1;
    }
    else
    {
        q->front++;
    }
    return node;
}

// Function to create the binary tree
void createTree()
{
    struct queue *q = createQueue(100);
    int data;
    printf("Enter the root value: ");
    scanf("%d", &data);
    root = createNode(data);
    enqueue(q, root);
    while (!isEmpty(q))
    {
        struct Node *currentNode = dequeue(q);
        int leftData, rightData;
        printf("Enter left child of %d (-1 for no child): ", currentNode->data);
        scanf("%d", &leftData);
        if (leftData != -1) {
            currentNode->lchild = createNode(leftData);
            enqueue(q, currentNode->lchild);
        }
        printf("Enter right child of %d (-1 for no child): ", currentNode->data);
        scanf("%d", &rightData);
        if (rightData != -1)
         {
            currentNode->rchild = createNode(rightData);
            enqueue(q, currentNode->rchild);
        }
    }
    free(q->array);
    free(q);
}

// Function to print spaces
void printSpaces(int count)
 {
    int i;
    for (i = 0; i < count; i++)
    {
        printf(" ");
    }
}

// Function to print the tree in 90-degree clockwise rotated format
void printTree(struct Node *root, int level)
{
    if (root == NULL)
    {
        return;
    }
    printTree(root->rchild, level + 1);
    printSpaces(4 * level);
    printf("%d\n", root->data);
    printTree(root->lchild, level + 1);
}
void preorder(struct Node *p) {
    if (p != NULL) {
        printf("%d ", p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void postorder(struct Node *p) {
    if (p != NULL) {
        postorder(p->lchild);
        postorder(p->rchild);
        printf("%d ", p->data);
    }
}

void inorder(struct Node *p) {
    if (p != NULL) {
        inorder(p->lchild);
        printf("%d ", p->data);
        inorder(p->rchild);
    }
}

int main()
{
    int l,s,d;
    createTree();
    printf("The Tree is :\n");
    printTree(root, 0);
    printf("--PREORDER--\n");
    preorder(root);
    printf("\n");
    printf("---INORDER--\n");
    inorder(root);
    printf("\n");
    printf("---POSTORDER--\n");
    postorder(root);
    printf("enter the node to be deleted\n");
    scanf("%d",&d);
    root = deleteNode(root,d);
    printf("Tree after deletion\n");
    printTree(root, 0);
    return 0;
}
struct Node* minValueNode(struct Node* node)
{
  struct Node * current = node;
  // loop down to leftmost leaf
  while (current->lchild != NULL)
  {
    current = current->lchild;
  }
  return current;
}
struct Node* deleteNode(struct Node* root, int data)
{
  if (root == NULL)
  {
    return root;
  }
  if (data < root->data)
  {
    root->lchild = deleteNode(root->lchild, data);
  }
  else if (data > root->data)
  {
    root->rchild = deleteNode(root->rchild, data);
  }
  else
  {
    if (root->lchild == NULL)
    {
      struct Node* temp = root->rchild;
      free(root);
      return temp;
    }
    else if (root->rchild == NULL)
    {
      struct Node* temp = root->lchild;
      free(root);
      return temp;
    }
    struct Node* temp = minValueNode(root->rchild);
    root->data = temp->data;
    root->rchild = deleteNode(root->rchild, temp->data);
  }
  return root;
}
