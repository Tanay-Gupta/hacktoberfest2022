/*
Name: Pair Sum in BST

Problem Link : https://www.codingninjas.com/codestudio/problems/pair-sum-in-bst_920493?topList=striver-sde-sheet-problems
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

void inorder(BinaryTreeNode<int> *root, vector<int> &arr)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left, arr);
    arr.push_back(root->data);
    inorder(root->right, arr);
}

bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    if (root == NULL)
    {
        return false;
    }

    vector<int> arr;

    inorder(root, arr);

    int i = 0;
    int j = arr.size() - 1;

    while (i < j)
    {
        int sum = arr[i] + arr[j];

        if (sum < k)
        {
            i++;
        }
        else if (sum > k)
        {
            j--;
        }
        else
        {
            return true;
        }
    }

    return false;
}