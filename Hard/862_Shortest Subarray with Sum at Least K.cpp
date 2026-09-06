/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-17 || 18:14:11
 * * * * File    : _862_Shortest Subarray with Sum at Least K.cpp
 */


// https://leetcode.com/problems/shortest-subarray-with-sum-at-least-k/description/


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
    int shortestSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        deque<int> deq;
        vector<long long> culSum(n, 0);
        int res=INT_MAX;
        int j=0;
        while(j<n){
            if(j==0){
                culSum[j]=nums[j];
            }else{
                culSum[j]=culSum[j-1]+nums[j];
            }
            if(culSum[j]>=k){
                res=min(res, j+1);
            }
            while(!deq.empty() && culSum[j]-culSum[deq.front()]>=k){
                res=min(res, j-deq.front());
                deq.pop_front();
            }
            while(!deq.empty() && culSum[j]<=culSum[deq.back()]){
                deq.pop_back();
            }
            deq.push_back(j);
            j++;
        }
        if(res==INT_MAX) return -1;
        else return res;
    }
};