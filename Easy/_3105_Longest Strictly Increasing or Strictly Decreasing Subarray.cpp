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
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int res=0;

        for(int i=0; i<n; i++){
            int incre=1;
            int j=i+1;
            while (j<n && nums[j]>nums[j-1])
            {
                incre++;
                j++;
            }

            int decre=1;
            j=i+1;
            while (j<n && nums[j]<nums[j-1])
            {
                decre++;
                j++;
            }

            res=max({res, incre, decre});
        }

        return res;
    }
};