/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-07 || 15:20:13
 * * * * File    : _1760_Minimum Limit of Balls in a Bag.cpp
 */


// https://leetcode.com/problems/minimum-limit-of-balls-in-a-bag/description/?envType=daily-question&envId=2024-12-07


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
    bool solve(vector<int>& nums, int mxOp, int mid){
        int totalOp=0;
        for(auto &num:nums){
            int ops=num/mid;
            if(num%mid==0){
                ops-=1;
            }
            totalOp+=ops;
        }
        return totalOp<=mxOp;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        int l=1, r=*max_element(nums.begin(), nums.end());
        int res=r;
        while(l<=r){
            int mid=(l+r)/2;
            if(solve(nums, maxOperations, mid)==true){
                res=mid;
                r=mid-1;
            }else l=mid+1;
        }
        return res;
    }
};