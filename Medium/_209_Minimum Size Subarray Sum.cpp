/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-17 || 15:48:38
 * * * * File    : _209_Minimum Size Subarray Sum.cpp
 */


// https://leetcode.com/problems/minimum-size-subarray-sum/description/


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
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();

        int sum=0;
        int mnSize=INT_MAX;
        int i=0, j=0;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                mnSize=min(mnSize, j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
        }   
        if(mnSize==INT_MAX) return 0;
        else return mnSize;
    }
};