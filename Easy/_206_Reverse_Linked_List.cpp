//https://leetcode.com/problems/reverse-linked-list/description/

// class Solution {
// public:
//     void reverse(ListNode *&head, ListNode *cur){
//         if(cur->next == NULL){
//             head = cur;
//             return;
//         }
//         reverse(head, cur->next);
//         cur->next->next = cur;
//         cur->next = NULL;
//     }
//     ListNode* reverseList(ListNode* head) {
//         if(head == NULL) return head;
//         reverse(head, head);
//         return head;
//     }
// };

#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// main part;
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head== nullptr || head->next== nullptr){
            return head;
        }
        ListNode* last=reverseList(head->next);
        head->next->next=head;
        head->next=nullptr;
        return last;
    }
};
