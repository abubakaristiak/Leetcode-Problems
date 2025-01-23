/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-23 || 20:20:54
 * * * * File    : _1267_Count Servers that Communicate.cpp
 */

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
    int countServers(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int serversConnection=0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                    bool connect=false;
                    for(int col=0; col<n; col++){
                        if(col!=j && grid[i][col]==1){
                            connect=true;
                            break;
                        }
                    }
                    if(connect){
                        serversConnection++;
                    }else{
                        for(int row=0; row<m; row++){
                            if(row !=i && grid[row][j]==1){
                                connect=true;
                                break;
                            }
                        }
                        if(connect){
                            serversConnection++;
                        }
                    }
                }
            }
        }
        return serversConnection;
    }
};




class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        vector<int> colSuccessConnectionCnt(n,0);
        vector<int> rowSuccessConnectionCnt(m,0);

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                    colSuccessConnectionCnt[j]+=1;
                    rowSuccessConnectionCnt[i]+=1;
                }
            }
        }

        int serversConnection=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1 && (colSuccessConnectionCnt[j]>1 || rowSuccessConnectionCnt[i]>1)){
                    serversConnection++;
                }
            }
        }
        return serversConnection;

    }
};