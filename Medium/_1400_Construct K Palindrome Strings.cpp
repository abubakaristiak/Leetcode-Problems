/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-11 || 12:17:34
 * * * * File    : _1400_Construct K Palindrome Strings.cpp
 */


// https://leetcode.com/problems/construct-k-palindrome-strings/description/?envType=daily-question&envId=2025-01-11


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
    bool canConstruct(string s, int k) {
        int n=s.length();

        if(n<k){
            return false;
        }
        if(n==k){
            return true;
        }

        vector<int> v(26,0);
        for(char &ch:s){
            v[ch-'a']++;
        }

        int oddFreCnt=0;
        for(int i=0; i<26; i++){
            if(v[i]%2==1){
                oddFreCnt++;
            }
        }
        return oddFreCnt<=k;
    }
};