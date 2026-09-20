/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-14 || 12:42:59
 * * * * File    : _2064_Minimized Maximum of Products Distributed to Any Store.cpp
 */


// https://leetcode.com/problems/minimized-maximum-of-products-distributed-to-any-store/description/?envType=daily-question&envId=2024-11-14


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
    bool distriute(int mid, vector<int>& quantities, int n){
        for(int &products:quantities){
            n-=(products+mid-1)/mid;
            if(n<0){
                return false;
            }
        }
        return true;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int m=quantities.size();
        int l=1, r=*max_element(quantities.begin(), quantities.end());
        int res=0;

        while(l<=r){
            int mid=l+(r-l)/2;
            if(distriute(mid, quantities, n)){
                res=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return res;
    }
};