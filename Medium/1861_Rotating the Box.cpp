/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-23 || 12:37:29
 * * * * File    : _1861_Rotating the Box.cpp
 */


// https://leetcode.com/problems/rotating-the-box/description/?envType=daily-question&envId=2024-11-23


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

// Brute force;
class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m=box.size();
        int n=box[0].size();
        vector<vector<char>> res(n, vector<char>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                res[i][j]=box[j][i];
            }
        }
        for(vector<char> &row: res){
            reverse(row.begin(), row.end());
        }


        for(int j=0; j<m; j++){
            for(int i=n-1; i>=0; i--){
                if(res[i][j]=='.'){
                    int border=-1;
                    for(int k=i-1; k>=0; k--){
                        if(res[k][j]=='*'){
                            break;
                        }else if(res[k][j]=='#'){
                            border=k;
                            break;
                        }
                    }
                    if(border!=-1){
                        res[i][j]='#';
                        res[border][j]='.';
                    }
                }
            }
        }
        return res;
    }
};


