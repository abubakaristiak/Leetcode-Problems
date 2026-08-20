//https://leetcode.com/problems/richest-customer-wealth/description/?envType=study-plan-v2&envId=programming-skills

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mxWealth=0;
        int rows=accounts.size();
        int cols=accounts[0].size();
        
        for(int i=0; i<rows; i++){
            int wealth=0;
            for(int j=0; j<cols; j++){
                wealth += accounts[i][j];
            }
            mxWealth = max(mxWealth,wealth);
        }
        return mxWealth;
    }
};