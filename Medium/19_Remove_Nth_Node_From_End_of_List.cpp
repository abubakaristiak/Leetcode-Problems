//https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
/*
class Solution {
public:
    int size(ListNode *head){
        ListNode *tmp = head;
        int cnt = 0;
        while(tmp != NULL){
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *tmp = head;
        int sz = size(head);
        if(n>sz){
            return head;
        }
        if(n==sz){
            ListNode *deleteNode = head;
            head = head->next;
            delete deleteNode;
            return head;
        }
        for(int i=1; i<sz-n; i++){
            tmp = tmp->next;
        }
        ListNode *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
        return head;
    }
};

*/