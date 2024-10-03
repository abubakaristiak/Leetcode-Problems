//https://leetcode.com/problems/min-cost-climbing-stairs/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dp[1005];
    int solve(int idx, vector<int>& cost){
        if(idx >= cost.size()) return 0;
        if(dp[idx] != -1) return dp[idx];

        int a = cost[idx]+solve(idx+1,cost);
        int b = cost[idx]+solve(idx+2,cost);
        return dp[idx] = min(a,b);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp, -1, sizeof(dp));
        return min(solve(0,cost),solve(1,cost));
    }
};