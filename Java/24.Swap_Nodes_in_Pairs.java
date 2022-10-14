/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapPairs(ListNode head) {
        if(head == null || head.next == null) return head;

        

        /**

        * If there are more than 1 nodes remaining, we would recursively call the method by passing the

        * next.next element.

        * This is because we would be swapping the head and the head.next element.

        * So, to call the method we would pass the head.next.next element.

        * This call will return a head which we would have to attach it to the current head.next element,

        AFTER SWAPPING.

        */

        ListNode tHead = swapPairs(head.next.next);

        

        /**

        * Here, we would write the swapping logic.

        * The node which is returned from the above line of code, will be connected with the nodes after

        * swapping here.

        */

        

        ListNode temp = head.next;

        head.next = tHead;

        temp.next = head;

        return temp;
    }
}
