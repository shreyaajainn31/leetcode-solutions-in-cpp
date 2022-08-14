class Solution {
public:
    void deleteNode(ListNode* node) {
        
        int temp = node->val;
        node->val =  node->next->val;
        node->next->val = temp;
        
        ListNode*next = node->next;
        
        if(next->next == nullptr){
            node->next = nullptr;
        }
        else{
            node->next = next->next;
        }   
    }
};
