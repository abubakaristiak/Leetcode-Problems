/*
||-----------------------------------||
||        Abu Bakar Istiak           ||
||     Chattogram Polytechnic        ||
||        Department of CST          ||
||    abubakar119147@gmail.com       ||
||-----------------------------------||
*/
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ull unsigned long long
#define pi pair<ll, ll>
#define vi vector<ll>
#define vpi vector<pi>
#define pb push_back
#define endl "\n"
#define sp " "
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define sz(x) (ll)(x).size()
#define minus cout << -1 << endl
#define zero cout << 0 << endl
#define MAX 100000
#define MOD 998244353
#define afor(i,a,b) for (ll i = (a); i < (b); ++i)
#define rfor(i,a,b) for (ll i = (a); i >= (b); --i)
#define asort(v) sort((v).begin(), (v).end())
#define rsort(v) sort((v).begin(), (v).end(), greater<>())
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


class Solution {
public:
    int n;
    bool isVaild(vector<int> &nums, int mid, int p){
        int i=0;
        int cnt=0;
        while (i<n-1){
            if(nums[i+1]-nums[i]<=mid){
                cnt++;
                i+=2;
            }else{
                i++;
            }
        }
        return cnt>=p;
        
    }
    int minimizeMax(vector<int>& nums, int p) {
        n=nums.size();
        asort(nums);

        int l=0, r=nums[n-1]-nums[0];
        int res=INT_MAX;
        while (l<=r){
            int mid=l+(r-l)/2;
            if(isVaild(nums, mid, p)){
                res=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return res;
        
    }
};