// https://leetcode.com/problems/maximum-number-of-moves-in-a-grid/description/?envType=daily-question&envId=2024-10-29

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> dir = {{0,1},{-1,1},{1,1}};
    int max_moves(vector<vector<int>>& grid, int &rows, int &cols, int i, int j, vector<vector<int>> &dp){
        if(j==cols-1){
            return 0;
        }
        else if(dp[i][j] != -1){
            return dp[i][j];
        }
        int maxCnt=0;
        for(int k=0; k<3; k++){
            int dx=i+dir[k][0];
            int dy=j+dir[k][1];
            if(dx<0 || dx==rows || dy<0 || dy==cols || grid[dx][dy]<=grid[i][j]){
                continue;
            }
            maxCnt = max(maxCnt, max_moves(grid, rows, cols, dx, dy, dp)+1);
        }
        return dp[i][j] = maxCnt;

    }
    int maxMoves(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        int ans=0;
        vector<vector<int>> dp(rows, vector<int>(cols, -1));
        for(int i=0; i<rows; i++){
            ans = max(ans,max_moves(grid, rows, cols, i, 0, dp));
        }
        return ans;
        
    }
};