class Solution {
public:
    
    bool check(TreeNode* root,int target){
        if(!root) return false;
        if(root->left==nullptr and root->right==nullptr and target-root->val==0) return true;
        return check(root->left,target-root->val) or check(root->right,target-root->val);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        return check(root,targetSum);
    }
};