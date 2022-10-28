/*
Name: Ceil from BST

Problem Link : https://www.codingninjas.com/codestudio/problems/ceil-from-bst_920464?topList=striver-sde-sheet-problems
*/

#include <bits/stdc++.h>

using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~BinaryTreeNode()
    {
        if (left)
        {
            delete left;
        }
        if (right)
        {
            delete right;
        }
    }
};

void helper(BinaryTreeNode<int> *root, int x, int &ceil)
{
    if (root == NULL)
    {
        return;
    }

    if (root->data >= x)
    {
        ceil = min(ceil, root->data);
    }

    if (x < root->data)
    {
        helper(root->left, x, ceil);
    }

    if (x > root->data)
    {
        helper(root->right, x, ceil);
    }
}

int findCeil(BinaryTreeNode<int> *root, int x)
{
    int ceil = 1e9;

    helper(root, x, ceil);

    if (ceil == 1e9)
        return -1;

    return ceil;
}