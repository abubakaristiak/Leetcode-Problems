/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-17 || 22:57:55
 * * * * File    : _191_Number of 1 Bits.cpp
 */



// https://leetcode.com/problems/number-of-1-bits/description/



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
    int hammingWeight(int n) {
        return __builtin_popcount(n);
    }
};



// Another approach
class Solution {
public:
    int hammingWeight(int n) {
        int cnt=0;
        for(int i=31; i>=0; i--){
            if(((n>>i) & 1) == 1){
                cnt++;
            }
        }
        return cnt;
    }
};