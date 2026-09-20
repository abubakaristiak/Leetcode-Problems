//https://leetcode.com/problems/merge-nodes-in-between-zeros/description/?envType=daily-question&envId=2024-07-04
/*
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        head = head->next;
        ListNode *start = head;
        while(start != NULL){
            ListNode *end = start;
            int sum = 0;
            while(end->val !=0){
                sum += end->val;
                end= end->next;
            }
            start->val = sum;
            start->next = end->next;
            start = start->next;
        }
        return head;
    }
};
*/