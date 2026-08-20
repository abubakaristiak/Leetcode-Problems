/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-26 || 12:34:44
 * * * * File    : _2923_Find Champion I.cpp
 */


// https://leetcode.com/problems/find-champion-i/description/



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
    int findChampion(vector<vector<int>>& grid) {
        int n=grid.size();
        for(int i=0; i<n; i++){
            bool flag=true;
            for(int j=0; j<n; j++){
                if(i==j) continue;
                if(grid[i][j]!=1){
                    flag=false;
                    break;
                }
            }
            if(flag) return i;
        }
        return -1;
    }
};