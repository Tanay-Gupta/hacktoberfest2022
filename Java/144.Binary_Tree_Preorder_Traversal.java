class Solution {
    public List<Integer> preorderTraversal(TreeNode root) {
        ArrayList <Integer> list = new ArrayList<Integer>();
        helper(root, list);
        return list;
    }
    public void helper(TreeNode root, List<Integer> list)
    {
        if(root!=null)
        {
            list.add(root.val);
            helper(root.left,list);
            helper(root.right,list);
        }
    }
}
