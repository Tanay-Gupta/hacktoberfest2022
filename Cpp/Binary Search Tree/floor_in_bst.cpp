/*
Name: Floor in BST

Problem Link : https://www.codingninjas.com/codestudio/problems/floor-from-bst_920457?topList=striver-sde-sheet-problems
*/

#include <bits/stdc++.h>

using namespace std;

template <typename T>
class TreeNode
{
public:
    T val;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void helper(TreeNode<int> *root, int x, int &maxi)
{
    if (root == NULL)
    {
        return;
    }

    if (root->val <= x)
    {
        maxi = max(root->val, maxi);
    }

    if (x < root->val)
    {
        helper(root->left, x, maxi);
    }

    if (x >= root->val)
    {
        helper(root->right, x, maxi);
    }
}

int floorInBST(TreeNode<int> *root, int X)
{
    int maxi = -1e9;

    helper(root, X, maxi);

    return maxi;
}