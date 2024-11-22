/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-22 || 16:44:18
 * * * * File    : _1072_Flip Columns For Maximum Number of Equal Rows.cpp
 */


// https://leetcode.com/problems/flip-columns-for-maximum-number-of-equal-rows/description/?envType=daily-question&envId=2024-11-22



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
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int mxRows=0;
        for(auto &curRow:matrix){
            vector<int> invert(n);
            for(int j=0; j<n; j++){
                invert[j]=curRow[j] == 0 ? 1:0;
            }
            int cnt=0;
            for(auto &row:matrix){
                if(row==curRow || row==invert){
                    cnt++;
                }
            }
            mxRows=max(mxRows, cnt);
        }
        return mxRows;
    }
};