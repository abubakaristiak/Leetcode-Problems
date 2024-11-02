#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


// main parts
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evenSt=head->next;

        while(even!=nullptr && even->next!=nullptr){
            odd->next = even->next;
            even->next = even->next->next;

            odd=odd->next;
            even=even->next;
        }
        odd->next=evenSt;
        return head;
    }
};