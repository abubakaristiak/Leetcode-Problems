/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-21 || 12:18:15
 * * * * File    : _2257_Count Unguarded Cells in the Grid.cpp
 */


// https://leetcode.com/problems/count-unguarded-cells-in-the-grid/description/?envType=daily-question&envId=2024-11-21


#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
class Solution {
public:
    void marked(int row, int col, vector<vector<int>> &grid){
        for(int i=row-1; i>=0; i--){
            if(grid[i][col]==2 || grid[i][col]==3){
                break;
            }
            grid[i][col]=1;
        }
        for(int i=row+1; i<grid.size(); i++){
            if(grid[i][col]==2 || grid[i][col]==3){
                break;
            }
            grid[i][col]=1;
        }


        for(int j=col-1; j>=0; j--){
            if(grid[row][j]==2 || grid[row][j]==3){
                break;
            }
            grid[row][j]=1;
        }
        for(int j=col+1; j<grid[0].size(); j++){
            if(grid[row][j]==2 || grid[row][j]==3){
                break;
            }
            grid[row][j]=1;
        }
    }

    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m, vector<int>(n,0));
        for(vector<int>& v:guards){
            int i=v[0];
            int j=v[1];
            grid[i][j]=2;
        }
        for(vector<int> v:walls){
            int i=v[0];
            int j=v[1];
            grid[i][j]=3;
        }

        for(vector<int>& guard:guards){
            int i=guard[0];
            int j=guard[1];
            marked(i,j,grid);
        }
        int cnt=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==0){
                    cnt++;
                }
            }
        }
        return cnt;
        
    }
};