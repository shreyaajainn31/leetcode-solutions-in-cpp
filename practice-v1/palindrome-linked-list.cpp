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
    bool isPalindrome(ListNode* head) {
        stack<int>stack;
        
        ListNode*start = head;
        
        while(start != nullptr){
            stack.push(start->val);
            start = start->next;
        }
        start = head;
        
        while(start != nullptr){
            if(stack.top() != start->val){
                return false;
            }
            
            start = start->next;
            stack.pop();
        }
        
        return stack.empty();
    }
};
