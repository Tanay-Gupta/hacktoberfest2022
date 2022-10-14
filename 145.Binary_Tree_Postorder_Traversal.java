class Solution {
    public List<Integer> postorderTraversal(TreeNode root) {
        ArrayList <Integer> list = new ArrayList<Integer>();
        helper(root, list);
        return list;
    }
    public void helper(TreeNode root, List<Integer> list)
    {
        if(root!=null)
        {
            helper(root.left,list);
            helper(root.right,list);
            list.add(root.val);
        }
    }
}
