//https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/?envType=study-plan-v2&envId=leetcode-75

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


// main parts;
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }
        ListNode* prev=nullptr;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=slow->next;
        delete(slow);
        return head;
        
    }
};