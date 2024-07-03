//https://leetcode.com/problems/remove-linked-list-elements/description/
/*
class Solution {
public:
    ListNode* removeElements(ListNode* &head, int val) {
        while(head != NULL && head->val ==val){
            ListNode *deleteNode = head;
            head = head->next;
            delete deleteNode;  
        }
        if(head == NULL){
            return NULL;
        }
        ListNode *tmp = head;
        while(tmp->next != NULL){
            if(tmp->next->val == val){
                ListNode *deleteNode = tmp->next;
                tmp->next = tmp->next->next;
                delete deleteNode;
            }
            else{
                tmp = tmp->next;
            }
        }
        return head;
    }
};
*/