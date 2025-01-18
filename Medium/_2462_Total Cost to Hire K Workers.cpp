/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-18 || 10:40:00
 * * * * File    : _2462_Total Cost to Hire K Workers.cpp
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
    long long totalCost(vector<int>& costs, int k, int candidates) {
        int n=costs.size();

        priority_queue<int, vector<int>, greater<int>> pq1, pq2;
        ll ans=0;
        int hired=0;
        int i=0, j=n-1;
        while (hired<k)
        {
            while (pq1.size()<candidates && i<=j)
            {
                pq1.push(costs[i]);
                i++;
            }
            while (pq2.size()<candidates && j>=i)
            {
                pq2.push(costs[j]);
                j--;
            }
            
            int val1=pq1.size() > 0 ? pq1.top() : INT_MAX;
            int val2=pq2.size() > 0 ? pq2.top() : INT_MAX;
            if(val1<=val2){
                ans+=val1;
                pq1.pop();
            }else{
                ans+=val2;
                pq2.pop();
            }
            hired++;
        }
        return ans;
        
    }
};