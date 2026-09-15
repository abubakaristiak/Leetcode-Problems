/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-31 || 01:17:19
 * * * * File    : _17_Letter Combinations of a Phone Number.cpp
 */


// https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/?envType=study-plan-v2&envId=leetcode-75



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
    vector<string> res;
    
    void solve(int idx, string &digits, string &tmp, unordered_map<char, string> &mp){
        if(idx>=digits.length()){
            res.push_back(tmp);
            return;
        }

        char ch=digits[idx];
        string str=mp[ch];
        for(int i=0; i<str.length(); i++){
            tmp.push_back(str[i]);
            solve(idx+1, digits, tmp, mp);
            tmp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0){
            return {};
        }
        unordered_map<char, string> mp;
        mp['2'] =  "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";

        string tmp="";
        solve(0, digits, tmp, mp);
        return res;
    }
};