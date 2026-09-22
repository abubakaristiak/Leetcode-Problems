/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-21 || 13:15:41
 * * * * File    : _121_Best Time to Buy and Sell Stock.cpp
 */


// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/?envType=study-plan-v2&envId=top-interview-150


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
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int l=0, r=1;
        int mxProfit=0;
        while(r<n){
            if(prices[l]<prices[r]){
                int profit=prices[r]-prices[l];
                mxProfit=max(mxProfit, profit);
            }else{
                l=r;
            }
            r++;
        }
        return mxProfit;
    }
};