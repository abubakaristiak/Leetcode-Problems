/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-02 || 09:29:36
 * * * * File    : _1752_Check if Array Is Sorted and Rotated.cpp
 */



// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/




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
    bool check(vector<int>& nums) {
        int n=nums.size();
        vector<int> sorted(n);
        for(int r=0; r<n; r++){
            int idx=0;
            for(int i=r; i<n; i++){
                sorted[idx]=nums[i];
                idx++;
            }
            for(int i=0; i<r; i++){
                sorted[idx]=nums[i];
                idx++;
            }
            bool isSorted=true;
            for(int i=0; i<n-1; i++){
                if(sorted[i]>sorted[i+1]){
                    isSorted=false;
                    break;
                }
            }
            
            if(isSorted){
                return true;
            }
        }
        return false;
    }
};