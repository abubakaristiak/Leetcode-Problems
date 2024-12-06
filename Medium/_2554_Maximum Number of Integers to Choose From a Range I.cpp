/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-06 || 19:58:36
 * * * * File    : _2554_Maximum Number of Integers to Choose From a Range I.cpp
 */


// https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i/description/


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
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> st(banned.begin(), banned.end());
        int cnt=0, sum=0;
        for(int i=1; i<=n; i++){
            if(st.count(i)){
                continue;
            }
            if(sum+i<=maxSum){
                cnt++;
                sum+=i;
            }else{
                break;
            }
        }
        return cnt;
    }
};