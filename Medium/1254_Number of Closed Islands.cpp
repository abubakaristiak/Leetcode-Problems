//TODO: https://leetcode.com/problems/number-of-closed-islands/description/
/*
class Solution {
public:
    bool vaild(int i, int j, int n, int m, vector<vector<int>>& grid){
        if(i>=0 && i<n && j>=0 && j<m && grid[i][j] == 0){
            return true;
        }
        return false;
    
    }
    void dfs(int i, int j, int n, int m, vector<vector<int>>& grid){
        grid[i][j] = 1;

        int ax[4] = {1, -1, 0, 0};  
        int ay[4] = {0, 0, 1, -1};

        for(int k=0; k<4; k++){
            int nx = i + ax[k];
            int ny = j + ay[k];
            if(vaild(nx, ny, n, m, grid)){
                dfs(nx, ny, n, m, grid);
        }
        }

    }
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i*j  == 0 || i == n-1 || j == m-1){
                    if(grid[i][j] == 0){
                        dfs(i, j, n, m, grid);
                    }
                }
            }
        }
        int ans=0; 
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 0){
                    ans++;
                    dfs(i, j, n, m, grid);
                }
            }
        }
        return ans;


    }
};
*/


// same to same;
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool vis[105][105];
    int n,m;
    vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};
    bool valid(int ci, int cj){
        if(ci>=0 && ci<n && cj>=0 && cj<m){
            return true;
        }
        else return false;
    }
    bool flag;
    void dfs(int si, int sj, vector<vector<int>>& grid){
        vis[si][sj] = true;
        if(si==0 || si==n-1 || sj==0 || sj==m-1){
            flag = false;
        }
        for(int i=0; i<4; i++){
            int ci = si+d[i].first;
            int cj = sj+d[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]==0){
                dfs(ci, cj, grid);  
            }
        }
    }
    int closedIsland(vector<vector<int>>& grid) {
        memset(vis, false, sizeof(vis));

        n = grid.size();
        m = grid[0].size();
        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!vis[i][j] && grid[i][j] == 0){
                    flag = true;
                    dfs(i,j, grid);
                    if(flag == true) {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};