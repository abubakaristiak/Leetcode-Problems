/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-01 || 18:49:29
 * * * * File    : _1422_Maximum Score After Splitting a String.cpp
 */



// https://leetcode.com/problems/maximum-score-after-splitting-a-string/description/


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
    int maxScore(string s) {
        int n=s.length();
        int res=INT_MIN;

        for(int i=0; i<n-1; i++){
            int zeroCnt=0;
            for(int j=0; j<=i; j++){
                if(s[j]=='0'){
                    zeroCnt++;
                }
            }

            int oneCnt=0;
            for(int j=i+1; j<n; j++){
                if(s[j]=='1'){
                    oneCnt++;
                }
            }

            res=max(res, zeroCnt+oneCnt);
        }

        return res;
    }
};