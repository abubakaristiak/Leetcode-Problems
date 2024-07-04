//https://leetcode.com/problems/intersection-of-two-linked-lists/
/*

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        for(ListNode *tmpA = headA; tmpA!= NULL; tmpA = tmpA->next){
            for(ListNode *tmpB = headB; tmpB != NULL; tmpB = tmpB->next){
                if(tmpA==tmpB){
                    return tmpA;
                }
            }
        }
        return NULL;
    }
};
*/