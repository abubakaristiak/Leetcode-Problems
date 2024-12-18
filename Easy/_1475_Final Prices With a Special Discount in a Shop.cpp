/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-18 || 22:08:45
 * * * * File    : _1475_Final Prices With a Special Discount in a Shop.cpp
 */


// https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/description/



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
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int> res(prices.begin(), prices.end());

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(prices[j]<=prices[i]){
                    res[i]-=prices[j];
                    break;
                }
            }
        }
        return res;
    }
};