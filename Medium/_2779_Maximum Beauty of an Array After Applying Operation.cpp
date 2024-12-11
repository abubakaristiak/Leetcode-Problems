/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-11 || 16:39:23
 * * * * File    : _2779_Maximum Beauty of an Array After Applying Operation.cpp
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
    int maximumBeauty(vector<int>& nums, int k) {
        int n=nums.size();
        vector<pair<int, int>> intervals(n);

        
        for(int i=0; i<n; i++){
            intervals[i]={nums[i]-k, nums[i]+k};
        } 
        sort(intervals.begin(), intervals.end());


        deque<pair<int, int>> deq;
        int mx=0;


        for(pair<int, int>&interval:intervals){
            while(!deq.empty() && deq.front().second<interval.first){
                deq.pop_front();
            }
            deq.push_back(interval);
            mx=max(mx, (int)deq.size());
        }
        return mx;
    }
};