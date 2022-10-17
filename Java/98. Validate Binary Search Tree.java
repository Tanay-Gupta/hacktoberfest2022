class Solution {

    /*1.We know that in BST every node has smaller nodes to its left and grater nodes to its right.
    
      2.We will exploit this property and check from our root node that if it is greater than Long.min and Smaller than Long.max. if yes we 
      go to its left and set the maximum possible value for left node to root.val and minimum same as it was for root. Sililarly for right node we set min possible 
      value as root.val.
      
      3.We do this for all nodes until our node is == null, in this case we say it is valid BST.
      4. if while comparing any node we find than node value is not within the range of its maximim and minimum possible value. we return false.
    */
    public boolean isValidBST(TreeNode root) {
        return validate(root, Long.MIN_VALUE, Long.MAX_VALUE);
    }

    private boolean validate(TreeNode root, long min, long max) {
        if (root == null) return true;

        // root should be within PASSED max, min range
        // initially it will check for long limit values
        if (root.val >= max || root.val <= min) return false;

        // if node is within range, we validate left and right branches
        // left has vales < node value, right has values > node value
        return validate(root.left, min, root.val) && validate(root.right, root.val, max);
    }
}
