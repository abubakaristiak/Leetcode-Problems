/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-23 || 11:35:59
 * * * * File    : _2542_Maximum Subsequence Score.cpp
 */



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
#define ll long long
class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int n=nums1.size();
        vector<pair<int, int>> v(n);
        for(int i=0; i<n; i++){
            v[i]={nums1[i], nums2[i]};
        }

        auto lambda=[&](auto &P1, auto &P2){
            return P1.second>P2.second;
        };
        sort(v.begin(), v.end(), lambda);

        priority_queue<int, vector<int>, greater<int>> pq;
        ll ksum=0;
        for(int i=0; i<=k-1; i++){
            ksum+=v[i].first;
            pq.push(v[i].first);
        }
        ll res=ksum*v[k-1].second;
        for(int i=k; i<n; i++){
            ksum+=v[i].first-pq.top();
            pq.pop();
            pq.push(v[i].first);
            res=max(res, ksum*v[i].second);

        }
        return res;

    }
};