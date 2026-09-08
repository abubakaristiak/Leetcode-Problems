//https://leetcode.com/problems/add-two-numbers/description/
/*
class Solution {
public:
    void insertTail(ListNode *&head, ListNode *&tail, int val)
    {
        ListNode *newNode = new ListNode(val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = NULL;
        ListNode *tail = NULL;
        int carry = 0;

        while(l1 != NULL || l2!= NULL){
            int val1, val2;
            if(l1 == NULL)
            {
                val1 = 0;
            }
            else
            {
                val1 = l1->val;
                l1 = l1->next;
            }
            if(l2 == NULL)
            {
                val2 = 0;
            }
            else
            {
                val2 = l2->val;
                l2 = l2->next;
            }
            int sum = val1 + val2 + carry;
            if(sum > 9)
            {
                carry = sum/10;
                sum = sum % 10;
            }
            else
            {
                carry = 0;
            }
            insertTail(head, tail, sum);
        }
        if(carry)
        {
            insertTail(head,tail, carry);
        }
        return head;

    }
};
*/