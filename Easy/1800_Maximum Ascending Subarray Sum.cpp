/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-04 || 16:16:34
 * * * * File    : _1800_Maximum Ascending Subarray Sum.cpp
 */


// https://leetcode.com/problems/maximum-ascending-subarray-sum/description/


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
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();

        int totalSum=0;
        for(int i=0; i<n; i++){
            int sum=nums[i];
            int j=i+1;
            while (j<n && nums[j]>nums[j-1]){
                sum+=nums[j];
                j++;
            }

            totalSum=max(totalSum, sum);
            
        }
        return totalSum;
    }
};