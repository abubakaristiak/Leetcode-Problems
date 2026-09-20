/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-03 || 15:56:39
 * * * * File    : _2270_Number of Ways to Split Array.cpp
 */


// https://leetcode.com/problems/number-of-ways-to-split-array/description/


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
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        ll sum=0;
        for(int &num:nums){
            sum+=num;
        }

        ll leftSum=0, rightSum=0, splitCnt=0;
        for(int i=0; i<n-1; i++){
            leftSum+=nums[i];
            rightSum=sum-leftSum;
            if(leftSum>=rightSum){
                splitCnt++;
            }
        }

        return splitCnt;
    }
};