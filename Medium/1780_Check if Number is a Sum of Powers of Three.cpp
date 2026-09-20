/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-05 || 00:28:08
 * * * * File    : _1780_Check if Number is a Sum of Powers of Three.cpp
*/



#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


class Solution {
public:
    bool checkPowersOfThree(int n) {
        int p=0;
        while (pow(3,p)<=n)
        {
            p++;
        }
        while (n>0)
        {
            if(n>=pow(3,p)){
                n=n-pow(3,p);
            }
            if(n>=pow(3,p)){
                return false;
            }
            p--;
        }
        return true;
        
        
    }
};