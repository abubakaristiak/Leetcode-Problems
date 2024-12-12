/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-12 || 15:04:54
 * * * * File    : _2558_Take Gifts From the Richest Pile.cpp
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
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq(gifts.begin(), gifts.end());

        long long sum=0;
        for(auto &gift:gifts){
            sum+=gift;
        }

        long long tmpSum=0;
        while(k--){
            int mx=pq.top();
            pq.pop();

            int remaining=sqrt(mx);
            tmpSum+=mx-remaining;
            pq.push(remaining);
        }

        return sum-tmpSum;
    }
};