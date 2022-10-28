/*
Name: Kth smallest node in BST

Problem Link : https://www.codingninjas.com/codestudio/problems/kth-smallest-node-in-bst_920441?topList=striver-sde-sheet-problems
*/

#include <bits/stdc++.h>

using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void inorderTraversal(TreeNode<int> *root, vector<int> &inorder)
{
    if (root == NULL)
    {
        return;
    }

    inorderTraversal(root->left, inorder);
    inorder.push_back(root->data);
    inorderTraversal(root->right, inorder);
}

int kthSmallest(TreeNode<int> *root, int k)
{
    vector<int> inorder;

    inorderTraversal(root, inorder);

    return inorder[k - 1];
}