/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-05-05 || 15:05:26
 * * * * File    : _1122_Relative Sort Array.cpp
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
#define sz(x) x.size()
#define endl "\n"
#define afor(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define rfor(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> res;
        int n=arr1.size(), m=arr2.size();
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(arr1[j]==arr2[i]){
                    res.push_back(arr1[j]);
                    arr1[j]=-1;
                }
            }
        }
        asort(arr1);
        for(int i=0; i<n; i++){
            if(arr1[i]!=-1){
                res.push_back(arr1[i]);
            }
        }
        return res;
    }
};