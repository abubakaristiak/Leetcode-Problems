/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-03 || 00:30:52
 * * * * File    : _205_Isomorphic Strings.cpp
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
    bool isIsomorphic(string s, string t) {
        vector<int> idxS(200,0);
        vector<int> idxT(200,0);
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0; i<s.length(); i++){
            if(idxS[s[i]]!=idxT[t[i]]){
                return false;
            }
            idxS[s[i]]=i+1;
            idxT[t[i]]=i+1;

        }
        return true;
    }
};