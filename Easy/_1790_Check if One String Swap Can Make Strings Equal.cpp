/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-05 || 14:37:12
 * * * * File    : _1790_Check if One String Swap Can Make Strings Equal.cpp
 */


// https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/description/


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
    bool areAlmostEqual(string s1, string s2) {
        int n=s1.length();

        if(s1==s2){
            return true;
        }

        int diff=0;
        int fre1[26]={0};
        int fre2[26]={0};
        for(int i=0; i<n; i++){
            if(s1[i]!=s2[i]){
                diff++;
            }
            if(diff>2){
                return false;
            }
            fre1[s1[i]-'a']++;
            fre2[s2[i]-'a']++;

        }

        for(int i=0; i<26; i++){
            if(fre1[i]!=fre2[i]){
                return false;
            }
        }
        return true;
    }
};