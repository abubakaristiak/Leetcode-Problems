/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-08 || 20:21:15
 * * * * File    : _3042_Count Prefix and Suffix Pairs I.cpp
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
    bool isPrefixSuffix(string &one, string &two){
        int n=one.length();

        string s1 = two.substr(0,n);
        string s2 = two.substr(two.length()-n, n);

        return s1==one && s2==one;
    }

    
    int countPrefixSuffixPairs(vector<string>& words) {
        auto lambda = [](string & s1, string & s2){
            return s1.length()<s2.length();
        };

        int cnt=0;
        for(int i=0; i<words.size()-1 ; i++){
            for(int j=i+1; j<words.size(); j++){
                if(words[i].length() <= words[j].length() && isPrefixSuffix(words[i], words[j])){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};