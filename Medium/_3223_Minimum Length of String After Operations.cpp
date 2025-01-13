/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-13 || 12:27:13
 * * * * File    : _3223_Minimum Length of String After Operations.cpp
 */


// https://leetcode.com/problems/minimum-length-of-string-after-operations/description/


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
    int minimumLength(string s) {
        int n=s.length();
        vector<int> fre(26,0);
        for(int i=0; i<n; i++){
            fre[s[i]-'a'] += 1;
            
            if(fre[s[i]-'a']==3){
                fre[s[i]-'a']-=2;
            }
        }
        int res=0;
        for(int i=0; i<26; i++){
            if(fre[i]==0){
                continue;
            }else{
                res+=fre[i];
            }
        }
        return res;
    }
};




// clean code:
class Solution {
public:
    int minimumLength(string s) {
        int n=s.length();
        vector<int> fre(26,0);
        int del=0;
        for(int i=0; i<n; i++){
            fre[s[i]-'a'] += 1;
            
            if(fre[s[i]-'a']==3){
                fre[s[i]-'a']-=2;
                del+=2;
            }
        }
        
        return n-del;
    }
};