/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-09 || 14:25:02
 * * * * File    : _2185_Counting Words With a Given Prefix.cpp
 */



// https://leetcode.com/problems/counting-words-with-a-given-prefix/description/




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
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;
        for(string s:words){
            if(s.substr(0,pref.length())==pref){
                cnt++;
            }
        }
        return cnt;
    }
};