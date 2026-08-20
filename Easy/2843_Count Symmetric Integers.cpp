/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-11 || 16:04:12
 * * * * File    : _2843_Count Symmetric Integers.cpp
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
    int countSymmetricIntegers(int low, int high) {
        int cnt=0;
        for(int i=low; i<=high; i++){
            string s=to_string(i);

            int n=s.length();

            if(n%2!=0){
                continue;
            }
            int leftSum=0, rightSum=0;
            for(int i=0; i<n/2; i++){
                leftSum+=s[i]-'0';
            }
            for(int i=n/2; i<n; i++){
                rightSum+=s[i]-'0';
            }
            if(leftSum==rightSum){
                cnt++;
            }
        }
        return cnt; 
    }
};