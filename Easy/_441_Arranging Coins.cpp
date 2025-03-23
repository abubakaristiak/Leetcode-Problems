/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : Abu Bakar Istiak
 * * * * Created : 2025-03-23 || 19:42:07
 * * * * File    : 441. Arranging Coins.cpp
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
    int arrangeCoins(int n) {
        ll res=(-1LL+sqrt(1LL+8LL*n))/2;
        return (int) res;
    }
};