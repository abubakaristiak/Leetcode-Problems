//https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
/*
class Solution {
public:
    int size(ListNode * head){
        ListNode *tmp = head;
        int cnt = 0; 
        while(tmp != NULL){
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }

    int getDecimalValue(ListNode* head) {
        ListNode *tmp = head;
        int sz = size(head);
        
        int x = pow(2, sz-1);
        int sum = 0; 
        while(tmp !=NULL){
            if(tmp->val == 1){
                sum += x;
            }
            x/=2;
            tmp = tmp->next;
            
        }
        return sum;
    }
};
*/