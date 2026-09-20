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


// main part;
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> v;
        ListNode* tmp=head;
        while(tmp != nullptr){
            v.push_back(tmp->val);
            tmp=tmp->next;
        }
        int res=0;
        int i=0,j=v.size()-1;
        while(i<j){
            res=max(res, v[i]+v[j]);
            i++;
            j--;
        }
        return res;
    }
};