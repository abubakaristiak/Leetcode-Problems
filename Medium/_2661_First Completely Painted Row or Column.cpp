/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-20 || 22:50:49
 * * * * File    : _2661_First Completely Painted Row or Column.cpp
 */


// https://leetcode.com/problems/first-completely-painted-row-or-column/description/?envType=daily-question&envId=2025-01-20



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
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        unordered_map<int, pair<int, int>> mp;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int val=mat[i][j];
                mp[val]={i,j};
            }
        }

        vector<int> rowCnt(m,0), colCnt(n,0);
        for(int i=0; i<arr.size(); i++){
            int val=arr[i];
            auto [row, col]=mp[val];

            rowCnt[row]++;
            colCnt[col]++;
            if(rowCnt[row]==n || colCnt[col]==m){
                return i;
            }
        }
        return -1;
    }
};
























/*
// Time Limit Exceeded;
class Solution {
public:
    bool paintedRow(vector<vector<int>> &mat, int row){
        for(int col=0; col<mat[0].size(); col++){
            if(mat[row][col]>0){
                return false;
            }
        }
        return true;
    }

    bool paintedCol(vector<vector<int>> &mat, int col){
        for(int row=0; row<mat.size(); row++){
            if(mat[row][col]>0){
                return false;
            }
        }
        return true;
    }



    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        unordered_map<int, pair<int, int>> mp;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int val=mat[i][j];
                mp[val]={i,j};
            }
        }

        for(int i=0; i<arr.size(); i++){
            int val=arr[i];
            auto [row, col]=mp[val];
            mat[row][col]*=-1;
            if(paintedRow(mat, row) || paintedCol(mat, col)){
                return i;
            }
        }
        return -1;
    }
};
*/