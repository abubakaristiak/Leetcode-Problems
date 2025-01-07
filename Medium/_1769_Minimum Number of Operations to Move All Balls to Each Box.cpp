/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-07 || 12:19:17
 * * * * File    : _1769_Minimum Number of Operations to Move All Balls to Each Box.cpp
 */


// https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/description/


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
    vector<int> minOperations(string boxes){
        int n=boxes.size();
        set<int> st;

        for(int i=0; i<n; i++){
            if(boxes[i]=='1'){
                st.insert(i);
            }
        }

        vector<int> res(n,0);
        for(int i=0;  i<n; i++){
            for(auto &idx:st){
                res[i]+=abs(i-idx);
            }
        }

        return res;
    }
};