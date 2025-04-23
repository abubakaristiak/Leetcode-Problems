/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-23 || 19:51:09
 * * * * File    : _1399_Count Largest Group.cpp
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
    int isDigitSum(int num){
        int sum=0;
        while (num)
        {
            sum+=num%10;
            num/=10;
        }
        return sum;
    }


    int countLargestGroup(int n) {
        map<int, int> mp;
        int mxSize=0, cnt=0;
        for(int num=1; num<=n; num++){
            int digitSum=isDigitSum(num);
            mp[digitSum]++;
            if(mp[digitSum]==mxSize){
                cnt++;
            }else if(mp[digitSum]>mxSize){
                mxSize=mp[digitSum];
                cnt=1;
            }
        }
        return cnt;
        
    }
};