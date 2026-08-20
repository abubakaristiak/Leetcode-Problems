/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-11 || 12:37:15
 * * * * File    : _1137_N-th Tribonacci Number.cpp
 */


// https://leetcode.com/problems/n-th-tribonacci-number/description/?envType=study-plan-v2&envId=leetcode-75


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
    int dp[38];
    int find(int n){
        if(n==0){
            return 0;
        }
        if(n==1 || n==2){
            return 1;
        }

        if(dp[n] != -1){
            return dp[n];
        }

        int a=find(n-1);
        int b=find(n-2);
        int c=find(n-3);
        return dp[n] = a+b+c;
    }


    int tribonacci(int n) {
        memset(dp, -1, sizeof(dp));
        return find(n);
    }
};