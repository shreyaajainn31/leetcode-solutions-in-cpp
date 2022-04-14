/*

You are given the head of a linked list, and an integer k.

Return the head of the linked list after swapping the values of the kth node from the beginning and the kth node from the end (the list is 1-indexed).


Example 1:


Input: head = [1,2,3,4,5], k = 2
Output: [1,4,3,2,5]
Example 2:

Input: head = [7,9,6,6,7,8,3,0,9,5], k = 5
Output: [7,9,6,6,8,7,3,0,9,5]
 

Constraints:

The number of nodes in the list is n.
1 <= k <= n <= 105
0 <= Node.val <= 100
https://leetcode.com/problems/swapping-nodes-in-a-linked-list/

*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    int findLength(ListNode * f1){
        
        ListNode * head = f1;
        int count = 0;
        while(head != NULL){
            count++;
            head = head->next;
        }
        
        return count;
    }
    
    ListNode* swapNodes(ListNode* head, int k) {
        if(head->next == NULL){
            return head;
        }
        
        int length = findLength(head);
        
        ListNode * fromStart = head;
        ListNode * fromEnd = head;
        
        for(int i = 0; i<k-1; i++){
            fromStart = fromStart -> next;
        }
                
        for(int i= 0; i<length - k; i++){
            fromEnd = fromEnd->next;
        }
        

        
        int x = fromStart->val;
        fromStart->val = fromEnd->val;
        fromEnd->val = x;
        
        return head;
        
    }
};
