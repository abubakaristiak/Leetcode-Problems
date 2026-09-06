/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-29 || 16:24:38
 * * * * File    : _2577_Minimum Time to Visit a Cell In a Grid.cpp
 */


// https://leetcode.com/problems/minimum-time-to-visit-a-cell-in-a-grid/description/


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
    #define P pair<int, pair<int, int>>
    vector<vector<int>> directions={{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    int minimumTime(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        if(grid[0][1]>1 && grid[1][0]>1){
            return -1;
        }


        vector<vector<bool>> vis(m, vector<bool>(n, false));
        vector<vector<int>> res(m, vector<int>(n, INT_MAX));

        priority_queue<P, vector<P>, greater<P>> pq;
        pq.push({grid[0][0], {0,0}});
        res[0][0]=0;

        while(!pq.empty()){
            int time=pq.top().first;
            int row=pq.top().second.first;
            int col=pq.top().second.second;
            pq.pop();

            if(row==m-1 && col==n-1){
                return res[m-1][n-1];
            }

            if(vis[row][col]) continue;
            vis[row][col]=true;

            for(auto dir:directions){
                int r=row+dir[0];
                int c=col+dir[1];
                if(r<0 || r>=m || c<0 || c>=n || vis[r][c]){
                    continue;
                }

                if(grid[r][c]<=time+1)
                {
                    pq.push({time+1, {r,c}});
                    res[r][c]=time+1;
                }
                else if((grid[r][c]-time)%2==0)
                {
                    pq.push({grid[r][c]+1, {r,c}});
                    res[r][c]=grid[r][c]+1;
                }
                else
                {
                    pq.push({grid[r][c], {r,c}});
                    res[r][c]=grid[r][c];
                }
            }
        }
        return -1;  
    }
};