/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-12 || 14:46:03
 * * * * File    : _2070_Most Beautiful Item for Each Query.cpp
 */

// https://leetcode.com/problems/most-beautiful-item-for-each-query/description/


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
    int bst(vector<vector<int>>& items, int price){
        int l=0, r=items.size()-1;
        int mid, mxBeauty=0;
        while(l<=r){
            mid=l+(r-l)/2;
            if(items[mid][0] > price){
                r=mid-1;
            } else{
                mxBeauty=max(mxBeauty, items[mid][1]);
                l=mid+1;
            }
        }
        return mxBeauty;
    }
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        int n=items.size();
        int m=queries.size();
        vector<int> res(m);
        sort(items.begin(), items.end());
        int mxBeauty=items[0][1];
        for(int i=1; i<n; i++){
            mxBeauty=max(mxBeauty, items[i][1]);
            items[i][1]=mxBeauty;
        }

        for(int i=0; i<m; i++){
            int price=queries[i];
            res[i]=bst(items, price);
        }
        return res;
    }
};