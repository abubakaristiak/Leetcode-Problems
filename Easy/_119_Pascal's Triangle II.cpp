/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-16 || 12:54:07
 * * * * File    : _119_Pascal's Triangle II.cpp
*/



#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> res(rowIndex+1);
        for(int i=0; i<rowIndex+1; i++){
            res[i]=vector<int> (i+1, 1);
            for(int j=1; j<i; j++){
                res[i][j]=res[i-1][j]+res[i-1][j-1];
            }
            if(i==rowIndex){
                return res[i];
            }
        }
        return {};
        
    }
};