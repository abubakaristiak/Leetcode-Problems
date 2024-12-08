/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-08 || 15:12:53
 * * * * File    : _2054_Two Best Non-Overlapping Events.cpp
 */



// https://leetcode.com/problems/two-best-non-overlapping-events/description/


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
    int n;
    int dp[100001][3];
    int binarySearch(vector<vector<int>>& events, int endTime) {
        int l = 0;
        int r = n-1;
        int result = n;
        while(l <= r) {
            int mid = l + (r-l)/2;
            if(events[mid][0] > endTime) {
                result = mid;
                r = mid-1;
            }else {
                l = mid+1;
            }
        }
        return result;
    }
    int solve(vector<vector<int>>& events, int i, int cnt){
        if(cnt==2 || i>=n){
            return 0;
        }
        if(dp[i][cnt]!=-1){
            return dp[i][cnt];
        }
        int nextIdx=binarySearch(events, events[i][1]);
        int take=events[i][2]+solve(events, nextIdx, cnt+1);
        int not_take=solve(events, i+1, cnt);
        return dp[i][cnt]=max(take, not_take);

    }
    int maxTwoEvents(vector<vector<int>>& events) {
        n=events.size();
        sort(events.begin(), events.end());
        memset(dp, -1, sizeof(dp));
        int cnt=0;
        return solve(events, 0, cnt);
    }
};