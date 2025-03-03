/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-04 || 00:58:24
 * * * * File    : _2161_Partition Array According to Given Pivot.cpp
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
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int> lessValue;
        vector<int> equalValue;
        vector<int> greaterValue;

        for(int i=0; i<n; i++){
            if(nums[i]<pivot){
                lessValue.push_back(nums[i]);
            }else if(nums[i]>pivot){
                greaterValue.push_back(nums[i]);
            }else{
                equalValue.push_back(nums[i]);
            }
        }

        for(int &num:equalValue){
            lessValue.push_back(num);
        }
        for(int &num:greaterValue){
            lessValue.push_back(num);
        }
        return lessValue;
    }
};