//https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/description/
/*
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
    if (!head || !head->next || !head->next->next) {
        return {-1, -1}; 
    }

    vector<int> criticalPoints;
    ListNode* prev = head;
    ListNode* curr = head->next;
    ListNode* next = curr->next;
    int index = 1;


    while (next != nullptr) {
        if ((curr->val > prev->val && curr->val > next->val) || 
            (curr->val < prev->val && curr->val < next->val)) {
            criticalPoints.push_back(index);
        }
        prev = curr;
        curr = next;
        next = next->next;
        index++;
    }

    if (criticalPoints.size() < 2) {
        return {-1, -1}; 
    }

    int minDistance = INT_MAX;
    int maxDistance = criticalPoints.back() - criticalPoints.front();

    for (size_t i = 1; i < criticalPoints.size(); ++i) {
        int distance = criticalPoints[i] - criticalPoints[i - 1];
        if (distance < minDistance) {
            minDistance = distance;
        }
    }

    return {minDistance, maxDistance};
    }
};
*/