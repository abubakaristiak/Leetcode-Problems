/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-05-02 || 23:40:53
 * * * * File    : _2824_Count Pairs Whose Sum is Less than Target.cpp
*/


#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n=nums.size();
        int cnt=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]+nums[j]<target){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};



// Binary Search:
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n=nums.size();
        asort(nums);
        int cnt=0;
        int l=0, r=n-1;
        while (l<r)
        {
            if(nums[l]+nums[r]<target){
                cnt+=(r-l);
                l++;
            }else{
                r--;
            }
        }
        return cnt;
    }
};