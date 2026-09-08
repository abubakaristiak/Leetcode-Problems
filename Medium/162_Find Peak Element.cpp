/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-28 || 21:55:28
 * * * * File    : _162_Find Peak Element.cpp
 */


// https://leetcode.com/problems/find-peak-element/description/?envType=study-plan-v2&envId=leetcode-75



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
    int findPeakElement(vector<int>& nums) {
        int l=0, r=nums.size()-1;

        while(l<r){
            int mid=l+(r-l)/2;
            if(nums[mid]>nums[mid+1]){
                r=mid;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
};