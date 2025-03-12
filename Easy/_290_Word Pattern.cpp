/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-12 || 13:41:10
 * * * * File    : demo.cpp
*/



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
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp;
        unordered_map<string, bool> vis;
        vector<string> storeWords;

        stringstream ss(s);
        string word;
        int cnt=0;
        while (ss>>word)
        {
            storeWords.push_back(word);
            cnt++;
        }
        if(pattern.size()!=cnt){
            return false;
        }else{
            for(int i=0; i<pattern.size(); i++){
                char ch=pattern[i];
                if(mp[ch]=="" && vis[storeWords[i]]==true){
                    return false;
                }else if(mp[ch]==""){
                    mp[ch]=storeWords[i];
                    vis[storeWords[i]]=true;
                }else{
                    if(mp[ch]!=storeWords[i]){
                        return false;
                    }
                }
            }
        }
        return true;
        
    }
};