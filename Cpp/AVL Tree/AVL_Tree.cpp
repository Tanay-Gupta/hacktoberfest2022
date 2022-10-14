#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct AVL_Node
{
    int value;
    struct AVL_Node *leftSubtree;
    struct AVL_Node *rightSubtree;
    int height;
};

int getMax(int num1, int num2)
{
    return num1 > num2 ? num1 : num2;
}

int getHeight(struct AVL_Node *node)
{
    if (node == NULL)
        return 0;
    return getMax(getHeight(node->leftSubtree), getHeight(node->rightSubtree)) + 1;
}

struct AVL_Node *newNode(int value)
{
    struct AVL_Node *temp = (struct AVL_Node *)malloc(sizeof(struct AVL_Node));
    temp->leftSubtree = NULL;
    temp->rightSubtree = NULL;
    temp->value = value;
    temp->height = 0;
    return (temp);
}

struct AVL_Node *antiClockwiseRotate(struct AVL_Node *a)
{
    struct AVL_Node *b = a->rightSubtree;
    struct AVL_Node *left_b = b->leftSubtree;

    b->leftSubtree = a;
    a->rightSubtree = left_b;

    a->height = getHeight(a);
    b->height = getHeight(b);

    return b;
}

struct AVL_Node *clockwiseRotate(struct AVL_Node *b)
{
    struct AVL_Node *a = b->leftSubtree;
    struct AVL_Node *right_a = a->rightSubtree;

    a->rightSubtree = b;
    b->leftSubtree = right_a;

    b->height = getHeight(b);
    a->height = getHeight(a);

    return a;
}

int getBalanceFactor(struct AVL_Node *temp)
{
    if (temp == NULL)
        return 0;
    return getHeight(temp->leftSubtree) - getHeight(temp->rightSubtree);
}

struct AVL_Node *insert(struct AVL_Node *node, int value)
{
    if (node == NULL)
    {
        return (newNode(value));
    }

    if (value < node->value)
    {
        node->leftSubtree = insert(node->leftSubtree, value);
    }
    else if (value > node->value)
    {
        node->rightSubtree = insert(node->rightSubtree, value);
    }
    else
    {
        return node;
    }

    node->height = getHeight(node);

    int balanceFactor = getBalanceFactor(node);

    if (balanceFactor < -1 && value > node->rightSubtree->value)
    {
        printf("Right Right rotation on %d\n", node->value);
        return antiClockwiseRotate(node);
    }

    if (balanceFactor > 1 && value < node->leftSubtree->value)
    {
        printf("Left Left rotation on %d\n", node->value);
        return clockwiseRotate(node);
    }

    if (balanceFactor < -1 && value < node->rightSubtree->value)
    {
        printf("Right Left rotation on %d\n", node->value);
        node->rightSubtree = clockwiseRotate(node->rightSubtree);
        return antiClockwiseRotate(node);
    }

    if (balanceFactor > 1 && value > node->leftSubtree->value)
    {
        printf("Left Right rotation on %d\n", node->value);
        node->leftSubtree = antiClockwiseRotate(node->leftSubtree);
        return clockwiseRotate(node);
    }

    return node;
}

struct AVL_Node *getMinNode(struct AVL_Node *root)
{
    struct AVL_Node *temp = root;

    while (temp->leftSubtree != NULL)
    {
        temp = temp->leftSubtree;
    }

    return temp;
}

struct AVL_Node *deleteNode(struct AVL_Node *root, int value)
{

    if (root == NULL)
    {
        return root;
    }

    if (value < root->value)
    {
        root->leftSubtree = deleteNode(root->leftSubtree, value);
    }

    else if (value > root->value)
    {
        root->rightSubtree = deleteNode(root->rightSubtree, value);
    }
    else
    {
        if ((root->leftSubtree == NULL) || (root->rightSubtree == NULL))
        {
            struct AVL_Node *temp = root->rightSubtree ? root->rightSubtree : root->leftSubtree;

            if (temp == NULL)
            {
                temp = root;
                root = NULL;
            }
            else
                *root = *temp;
            free(temp);
        }
        else
        {
            struct AVL_Node *temp = getMinNode(root->rightSubtree);

            root->value = temp->value;

            root->rightSubtree = deleteNode(root->rightSubtree, temp->value);
        }
    }

    if (root == NULL)
        return root;

    root->height = 1 + getMax(getHeight(root->leftSubtree), getHeight(root->rightSubtree));

    int balanceFactor = getBalanceFactor(root);

    if (balanceFactor > 1 && getBalanceFactor(root->leftSubtree) >= 0)
    {
        return clockwiseRotate(root);
    }

    if (balanceFactor > 1 && getBalanceFactor(root->leftSubtree) < 0)
    {
        root->leftSubtree = antiClockwiseRotate(root->leftSubtree);
        return clockwiseRotate(root);
    }

    if (balanceFactor < -1 && getBalanceFactor(root->rightSubtree) <= 0)
    {
        return antiClockwiseRotate(root);
    }

    if (balanceFactor < -1 && getBalanceFactor(root->rightSubtree) > 0)
    {
        root->rightSubtree = clockwiseRotate(root->rightSubtree);
        return antiClockwiseRotate(root);
    }

    return root;
}

void inOrder(struct AVL_Node *root)
{
    if (root != NULL)
    {
        inOrder(root->leftSubtree);
        printf("%d ", root->value);
        inOrder(root->rightSubtree);
    }
}

int main()
{
    printf("\n\n<------------------------Question 1------------------------>\n\n");
    struct AVL_Node *root = NULL;
    int noOfElements = 9;
    root = insert(root, 12);
    root = insert(root, 14);
    root = insert(root, 15);
    root = insert(root, 17);
    root = insert(root, 3);
    root = insert(root, 4);
    root = insert(root, 9);
    root = insert(root, 10);
    root = insert(root, 20);

    printf("InOrder representation of the constructed AVL tree is :  \n");
    inOrder(root);

    printf("\n\n<------------------------Question 2------------------------>\n\n");
    for (int i = 0; i < noOfElements; i++)
    {
        printf("InOrder representation of the constructed AVL tree after deleting %d is : ", root->value);
        root = deleteNode(root, root->value);
        inOrder(root);
        printf("\n\n");
    }

    return 0;
}
