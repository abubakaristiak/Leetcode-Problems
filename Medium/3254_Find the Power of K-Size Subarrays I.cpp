/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-16 || 13:05:28
 * * * * File    : _3254_Find the Power of K-Size Subarrays I.cpp
 */


// https://leetcode.com/problems/find-the-power-of-k-size-subarrays-i/description/


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
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> res(n-k+1, -1);

        int cnt=1;
        for(int i=1; i<k; i++){
            if(nums[i]==nums[i-1]+1){
                cnt++;
            }else{
                cnt=1;
            }
        }
        if(cnt==k){
            res[0]=nums[k-1];
        }
        int i=1, j=k;
        while(j<n){
            if(nums[j]==nums[j-1]+1){
                cnt++;
            }else{
                cnt=1;
            }

            if(cnt>=k){
                res[i]=nums[j];
            }
            i++, j++;
        }
        return res;
    }
};
