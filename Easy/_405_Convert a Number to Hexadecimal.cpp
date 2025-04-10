/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-10 || 17:47:41
 * * * * File    : _405_Convert a Number to Hexadecimal.cpp
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
    string toHex(int num) {
        if(num==0){
            return to_string(0);
        }
        unsigned int n=num;
        string hexDigits="0123456789abcdef";
        string res="";
        while (n>0)
        {
            int r=n%16;
            if(r<10){
                res+=r+'0';
            }else{
                res+=hexDigits[r];
            }
            n/=16;
        }
        reverse(res.begin(), res.end());
        return res;
        
    }
};