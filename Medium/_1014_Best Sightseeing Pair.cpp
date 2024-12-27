/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-27 || 23:39:51
 * * * * File    : _1014_Best Sightseeing Pair.cpp
 */




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
    int maxScoreSightseeingPair(vector<int>& values) {
        int n=values.size();
        int res=0;

        for(int i=1; i<n; i++){
            int mx=0;
            for(int j=i-1; j>=0; j--){
                mx=max(mx, values[j]+j);
            }
            res=max(res, mx+values[i]-i);
        }
        return res;
    }
};