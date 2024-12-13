/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-13 || 12:42:29
 * * * * File    : _2593_Find Score of an Array After Marking All Elements.cpp
 */


// https://leetcode.com/problems/find-score-of-an-array-after-marking-all-elements/description/



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
    long long findScore(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>> v(n);
        for(int i=0; i<n; i++){
            v[i]={nums[i], i};
        }
        sort(v.begin(), v.end());

        long long score=0;
        vector<bool> vis(n, false);

        for(int i=0; i<n; i++){
            int value=v[i].first;
            int idx=v[i].second;

            if(vis[idx]==false){
                vis[idx]=true;
                score+=value;

                if(idx-1>=0 && vis[idx-1]==false){
                    vis[idx-1]=true;
                }
                if(idx+1<n && vis[idx+1]==false){
                    vis[idx+1]=true;
                }
            }
        }
        return score;
    }
};