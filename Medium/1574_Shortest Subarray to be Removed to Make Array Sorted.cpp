/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-15 || 12:40:03
 * * * * File    : _1574_Shortest Subarray to be Removed to Make Array Sorted.cpp
 */

// https://leetcode.com/problems/shortest-subarray-to-be-removed-to-make-array-sorted/description/

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
    int findLengthOfShortestSubarray(vector<int>& ar) {
        int n=ar.size();
        int j=n-1;
        while(j>0 && ar[j]>=ar[j-1]){
            j--;
        }
        int i=0;
        int res=j;
        while(i<j && (i==0 || ar[i]>=ar[i-1])){
            while(j<n && ar[i]>ar[j]){
                j++;
            }
            res=min(res, j-i-1);
            i++;
        }
        return res;
    }
};