/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-26 || 16:19:44
 * * * * File    : _1945_Sum of Digits of String After Convert.cpp
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
    int getLucky(string s, int k) {
        string res="";
        for(char ch:s){
            res+=to_string(ch-'a'+1);
        }
        while (k>0)
        {
            int tmp=0;
            for(char ch:res){
                tmp+=ch-'0';
            }
            res=to_string(tmp);
            k--;
        }
        return stoi(res);
        
    }
};