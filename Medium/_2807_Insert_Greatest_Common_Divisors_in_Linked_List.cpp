//https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/description/
/*
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *tmp = head;
        while(tmp->next != NULL){
            int val = __gcd(tmp->val, tmp->next->val);
            ListNode *newNode = new ListNode(val); 
            newNode->next = tmp->next;
            tmp->next = newNode;
            tmp = tmp->next->next;
        }
        return head;
    }
};

*/