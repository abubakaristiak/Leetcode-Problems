/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-19 || 23:58:15
 * * * * File    : _769_Max Chunks To Make Sorted.cpp
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
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        vector<int> prefix_mx(arr.begin(), arr.end());
        vector<int> suffix_mn(arr.begin(), arr.end());

        for(int i=1; i<n; i++){
            prefix_mx[i]=max(prefix_mx[i-1], prefix_mx[i]);
        }

        for(int i=n-2; i>=0; i--){
            suffix_mn[i]=min(suffix_mn[i+1], suffix_mn[i]);
        }

        int cnt=0;
        for(int i=0; i<n; i++){
            int pre=i>0 ? prefix_mx[i-1] : -1;
            int suf=suffix_mn[i];
            if(pre<suf){
                cnt++;
            }
        }
        return cnt;

    }
};