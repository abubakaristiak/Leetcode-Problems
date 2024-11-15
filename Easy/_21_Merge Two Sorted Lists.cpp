/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-15 || 09:00:47
 * * * * File    : _21_Merge Two Sorted Lists.cpp
 */

// https://leetcode.com/problems/merge-two-sorted-lists/description/?envType=study-plan-v2&envId=programming-skills


#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// main part
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        
        ListNode *result;
        if(list1->val < list2->val){
            result=list1;
            result->next = mergeTwoLists(list1->next,list2);
        }
        else{
            result=list2;
            result->next = mergeTwoLists(list1,list2->next);
        }
        return result;
    }
};