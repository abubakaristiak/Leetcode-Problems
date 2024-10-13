//https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/description/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int n=nums.size();
        int diff=INT_MAX;
        priority_queue<vector<int>, vector<vector<int>>,greater<vector<int>>> pq;
        priority_queue<vector<int>> pq1;
        vector<int> ans(2);
        for(int i=0; i<n; i++){
            pq.push({nums[i][0], i,0});
            pq1.push({nums[i][0], i,0});

        }
        while(true){
            int cur_diff=pq1.top()[0]-pq.top()[0]+1;
            if(cur_diff<diff){
                diff=cur_diff;
                ans[0]=pq.top()[0];
                ans[1]=pq1.top()[0];
            }
            int x=pq.top()[1], y=pq.top()[2];
            y++;
            pq.pop();
            if(y==nums[x].size()){
                break;
            }
            pq.push({nums[x][y],x,y});
            pq1.push({nums[x][y],x,y});

        }
        return ans;
    }
};