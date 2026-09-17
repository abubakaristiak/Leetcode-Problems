/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-10 || 12:34:04
 * * * * File    : _916_Word Subsets.cpp
 */



// https://leetcode.com/problems/word-subsets/description/



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
    bool isSubset(vector<int> &fre2, vector<int> &tmp){
        for(int i=0; i<26; i++){
            if(tmp[i]<fre2[i]){
                return false;
            }
        }
        return true;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> res;

        vector<int> fre2(26);
        for(string str:words2){
            vector<int> tmp(26,0);
            for(char &ch:str){
                tmp[ch-'a']++;
                fre2[ch-'a'] = max(fre2[ch-'a'], tmp[ch-'a']);
                
            }
        }


        for(string &str:words1){
            vector<int> tmp(26,0);
            for(char &ch:str){
                tmp[ch-'a']++;
            }

            if(isSubset(fre2, tmp)==true){
                res.push_back(str);
            }
        }
        return res;
    }
};