/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-08 || 12:12:42
 * * * * File    : _3396_Minimum Number of Operations to Make Elements in Array Distinct.cpp
*/


#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


class Solution {
public:
    bool isDistinct(vector<int>& nums){
        set<int> st;
        for(int i=0; i<nums.size(); i++){
            if(st.count(nums[i])){
                return false;
            }else{
                st.insert(nums[i]);
            }
        }
        return true;
    }
    int minimumOperations(vector<int>& nums) {
        int cnt=0;
        while (!isDistinct(nums))
        {
            cnt++;
            int removing=min(3, (int)nums.size());
            nums.erase(nums.begin(), nums.begin()+removing);
        }
        return cnt;
        
        
    }
};