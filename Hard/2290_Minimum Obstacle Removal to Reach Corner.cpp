/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-28 || 15:43:44
 * * * * File    : _2290_Minimum Obstacle Removal to Reach Corner.cpp
 */


// https://leetcode.com/problems/minimum-obstacle-removal-to-reach-corner/description/


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
    vector<vector<int>> directions={{0,1}, {0,-1}, {1,0}, {-1,0}};

    int minimumObstacles(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        vector<vector<int>> res(m, vector<int>(n, INT_MAX));
        res[0][0]=0;


        priority_queue<P, vector<P>, greater<P>> pq;
        pq.push({0,{0,0}});
        while(!pq.empty()){
            auto cur=pq.top();
            pq.pop();

            int d=cur.first;
            int i=cur.second.first;
            int j=cur.second.second;

            for(auto &dir:directions){
                int x=dir[0]+i;
                int y=dir[1]+j;
                if(x<0 || x>=m || y<0 || y>=n){
                    continue;
                }

                int weight=(grid[x][y]==1)?1:0;
                if(d+weight<res[x][y]){
                    res[x][y]=d+weight;
                    pq.push({d+weight, {x,y}});
                }
            }
        }
        return res[m-1][n-1];

    }
};