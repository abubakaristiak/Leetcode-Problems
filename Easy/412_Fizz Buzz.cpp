/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-15 || 23:10:01
 * * * * File    : _412_Fizz Buzz.cpp
*/


// https://leetcode.com/problems/fizz-buzz/description/


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
    vector<string> fizzBuzz(int n) {
        vector<string> res(n);
        for(int i=1; i<=n; i++){
            if(i%3==0 && i%5==0){
                res[i-1]="FizzBuzz";
            }else if(i%3==0){
                res[i-1]="Fizz";
            }else if(i%5==0){
                res[i-1]="Buzz";
            }else{
                res[i-1]=to_string(i);
            }
        }
        return res;
    }
};