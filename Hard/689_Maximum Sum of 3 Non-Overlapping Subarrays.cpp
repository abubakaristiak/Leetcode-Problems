/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-28 || 23:06:10
 * * * * File    : _689_Maximum Sum of 3 Non-Overlapping Subarrays.cpp
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
private:
    int t[200001][4];
    int helper(vector<int>& sums, int k, int idx, int rem){
        if(rem==0){
            return 0;
        }if(idx>=sums.size()){
            return INT_MIN;
        }
        if(t[idx][rem]!=-1){
            return t[idx][rem];
        }

        int take=sums[idx]+helper(sums,k,idx+k,rem-1);
        int not_take=helper(sums,k,idx+1,rem);
        t[idx][rem]=max(take, not_take);
        return t[idx][rem];
    }

    void solve(vector<int>& sums, int k, int idx, int rem, vector<int>& indices){
        if(rem==0){
            return;
        }if(idx>=sums.size()){
            return;
        }
        int take=sums[idx]+helper(sums,k,idx+k, rem-1);
        int not_take=helper(sums, k, idx+1, rem);

        if(take>=not_take){
            indices.push_back(idx);
            solve(sums, k, idx+k, rem-1, indices);
        }else solve(sums, k, idx+1, rem, indices);
    }
public:
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        memset(t, -1, sizeof(t));
        int n=nums.size()-k+1;

        vector<int> sums;
        int winSum=0, i=0, j=0;
        while (j<nums.size())
        {
            winSum+=nums[j];
            if(j-i+1==k){
                sums.push_back(winSum);
                winSum-=nums[i];
                i++;
            }
            j++;
        }
        
        vector<int> indices;
        solve(sums,k,0,3,indices);
        return indices;
        
    }
};