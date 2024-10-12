//https://leetcode.com/problems/divide-intervals-into-minimum-number-of-groups/description/?envType=daily-question&envId=2024-10-12

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        sort(begin(intervals),end(intervals));

        priority_queue<int,vector<int>, greater<int>>pq;
        for(vector<int>& interval : intervals){
            int start = interval[0];
            int end = interval[1];
            if(!pq.empty() && start>pq.top()){
                pq.pop();
            }
            pq.push(end);
        }
        return pq.size();
    }
};