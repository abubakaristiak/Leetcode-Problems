/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-18 || 10:07:45
 * * * * File    : _1926_Nearest Exit from Entrance in Maze.cpp
 */


// https://leetcode.com/problems/nearest-exit-from-entrance-in-maze/description/?envType=study-plan-v2&envId=leetcode-75


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
    vector<vector<int>> dir{{0,1},{0,-1},{1,0},{-1,0}};
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m=maze.size();
        int n=maze[0].size();

        queue<pair<int,int>> q;
        q.push({entrance[0], entrance[1]});
        maze[entrance[0]][entrance[1]]='+';

        int steps=0;
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                pair<int, int> tmp=q.front();
                q.pop();
                if(tmp!=make_pair(entrance[0], entrance[1])
                    && (tmp.first==0 || tmp.first==m-1 || tmp.second==0 || tmp.second==n-1)){
                    return steps;
                }
                for(auto &d:dir){
                    int i=tmp.first+d[0];
                    int j=tmp.second+d[1];
                    if(i>=0 && i<m && j>=0 && j<n && maze[i][j]!='+'){
                        q.push({i,j});
                        maze[i][j]='+';
                    }
                }
            }
            steps++;
        }
        return -1;
    }
};