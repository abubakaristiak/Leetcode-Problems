/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-05-04 || 18:09:37
 * * * * File    : _1128_Number of Equivalent Domino Pairs.cpp
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
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<pair<int,int>, int> mp;
        for(auto &dominoe:dominoes){
            if(dominoe[0]>dominoe[1]){
                swap(dominoe[0], dominoe[1]);
            }
            mp[{dominoe[0],dominoe[1]}]++;
        }
        int res=0;
        for(auto &it:mp){
            int fre=it.second;
            res+=fre*(fre-1)/2;
        }
        return res;
    }
};