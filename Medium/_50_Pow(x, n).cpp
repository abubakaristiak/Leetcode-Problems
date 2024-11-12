/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-12 || 16:04:59
 * * * * File    : _50_Pow(x, n).cpp
 */

// https://leetcode.com/problems/powx-n/description/?envType=study-plan-v2&envId=programming-skills


#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
class Solution {
public:
    double solve(double x, long n){
        if(n==0) return 1;
        if(n<0) return solve(1/x, -n);
        if(n%2==0) return solve(x*x, n/2);
        return x*solve(x*x, (n-1)/2);
    }
    double myPow(double x, int n) {
        return solve(x, (long)n);

    }
};