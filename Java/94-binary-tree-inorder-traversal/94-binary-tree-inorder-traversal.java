/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    
    public void inorder(TreeNode root,List<Integer> list)
    {
        if(root!=null)
        {
            inorder(root.left,list);
            list.add(root.val);
            inorder(root.right,list);
            
        }
}
    public List<Integer> inorderTraversal(TreeNode root) {
        
        ArrayList<Integer> ar=new ArrayList<>();
        inorder(root,ar);
        return(ar);
        
       
        
    }
}