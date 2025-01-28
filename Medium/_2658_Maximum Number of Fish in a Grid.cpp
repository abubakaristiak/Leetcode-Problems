/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-28 || 21:25:06
 * * * * File    : _2658_Maximum Number of Fish in a Grid.cpp
 */



// https://leetcode.com/problems/maximum-number-of-fish-in-a-grid/description/



#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;


class Solution {
public:
    int m,n;
    vector<vector<int>> directions = {{-1, 0}, {1,0}, {0,-1}, {0,1}};

    int dfs(int i, int j, vector<vector<int>>& grid){
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==0){
            return 0;
        }
        int fishCnt=grid[i][j];
        grid[i][j]=0;

        for(vector<int> dir:directions){
            int i_= i+dir[0];
            int j_= j+dir[1];

            fishCnt+=dfs(i_, j_, grid);

        }
        return fishCnt;

    }



    int findMaxFish(vector<vector<int>>& grid) {
        m=grid.size();
        n=grid[0].size();

        int mxFish=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]>0){
                    mxFish=max(mxFish, dfs(i,j,grid));
                }
            }
        }
        return mxFish;
    }
};