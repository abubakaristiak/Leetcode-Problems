/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-07 || 12:00:25
 * * * * File    : _1408_String Matching in an Array.cpp
 */



// https://leetcode.com/problems/string-matching-in-an-array/description/



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
    vector<string> stringMatching(vector<string>& words) {
        int n=words.size();
        vector<string> res;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j){
                    continue;
                }
                if(words[j].find(words[i]) != string::npos){
                    res.push_back(words[i]);
                    break;
                }
            }
        }
        return res;
    }
};