//https://leetcode.com/problems/swapping-nodes-in-a-linked-list/description/
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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *tmp1 = head;
        ListNode *tmp2 = head;
        for(int i=1; i<k; i++){
            tmp1 = tmp1->next;
        }
        int sz = size(head);
        for(int i=1; i<sz-k+1; i++){
            tmp2 = tmp2->next;
        }

        int tmp = tmp1->val;
        tmp1->val = tmp2->val;
        tmp2->val = tmp;
        return head;
    }
};
*/