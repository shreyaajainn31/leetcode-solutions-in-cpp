/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int length(ListNode * head){
        int count = 0;
        ListNode * l1 = head;
        while(l1!=nullptr){
            count++;
            l1= l1->next;
        }
        
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA == nullptr || headB == nullptr){
            return nullptr;
        }
        
        int l1 = length(headA);
        int l2 = length(headB);
      
        if(l1 > l2){
            int diff = l1 - l2;
            while(diff != 0){
                headA = headA->next;
                diff--;
            }
        }
        else{
            int diff = l2 - l1;
            while(diff != 0){
                headB = headB->next;
                diff--;
            }
        }
        
        while(headA != nullptr && headB != nullptr){
            if(headA == headB){
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        
        return nullptr;
    }
};
