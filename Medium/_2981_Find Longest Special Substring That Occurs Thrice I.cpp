/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-10 || 22:42:00
 * * * * File    : _2981_Find Longest Special Substring That Occurs Thrice I.cpp
 */


// https://leetcode.com/problems/find-longest-special-substring-that-occurs-thrice-i/description/




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
    int maximumLength(string s) {
        int n=s.size();
        map<string, int> mp;
        for(int i=0; i<n; i++){
            string cur="";
            for(int j=i; j<n; j++){
                if(cur.empty() || cur.back()==s[j]){
                    cur.push_back(s[j]);
                    mp[cur]++;
                }else break;
            }
        }
        int res=0;
        for(auto &it:mp){
            string str=it.first;
            int cnt=it.second;
            if(cnt>=3 && str.length()>res){
                res=str.length();
            }
        }
        if(res==0){
            return -1;
        }else return res;
    }
};