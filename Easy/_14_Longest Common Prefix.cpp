/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-17 || 22:48:34
 * * * * File    : _14_Longest Common Prefix.cpp
 */


// https://leetcode.com/problems/longest-common-prefix/description/


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
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string res="";
        asort(strs);

        string first=strs[0];
        string last=strs[n-1];
        for(int i=0; i<first.size(); i++){
            if(first[i] != last[i]){
                return res;
            }else{
                res+=first[i];
            }
        }
        return res;
    }
};