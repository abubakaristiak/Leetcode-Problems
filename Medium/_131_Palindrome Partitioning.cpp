/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-16 || 14:37:55
 * * * * File    : _131_Palindrome Partitioning.cpp
*/


// https://leetcode.com/problems/palindrome-partitioning/description/


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
    bool isPalindrome(string &s, int l, int r){
        while (l<=r)
        {
            if(s[l++] != s[r--]){
                return false;
            }
        }
        return true;
        
    }
    
    void solve(int idx, vector<vector<string>> &ans, vector<string> a, string s, int n){
        if(idx==n){
            ans.push_back(a);
            return;
        }
        for(int i=idx; i<n; i++){
            if(isPalindrome(s, idx, i)){
                a.push_back(s.substr(idx, i-idx+1));
                solve(i+1, ans, a, s, n);
                a.pop_back();
            }
        }
    }


    vector<vector<string>> partition(string s) {
        int n=s.size();
        vector<vector<string>> ans;
        vector<string> a;
        solve(0, ans, a, s, n);
        return ans;

    }
};