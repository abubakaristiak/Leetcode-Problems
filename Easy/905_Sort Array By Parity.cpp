/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-29 || 09:53:42
 * * * * File    : _905_Sort Array By Parity.cpp
 */


// https://leetcode.com/problems/sort-array-by-parity/description/


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
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even, odd;
        for(auto &num: nums){
            if(num%2==0){
                even.push_back(num);
            }else odd.push_back(num);
        }
        vector<int> res;
        for(auto &num:even){
            res.push_back(num);
        }
        for(auto &num:odd){
            res.push_back(num);
        }
        return res;
    }
};