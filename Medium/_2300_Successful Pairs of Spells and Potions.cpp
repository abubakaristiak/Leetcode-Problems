/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-27 || 19:30:50
 * * * * File    : _2300_Successful Pairs of Spells and Potions.cpp
 */


// https://leetcode.com/problems/successful-pairs-of-spells-and-potions/description/



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
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int m=spells.size();
        int n=potions.size();

        asort(potions);


        int mxPotion=potions[n-1];
        vector<int> res;
        for(int i=0; i<m; i++){
            int spell=spells[i];
            ll minPotion = ceill((1.0 * success)/spell);

            if(minPotion>mxPotion){
                res.push_back(0);
                continue;
            }
            int idx=lower_bound(potions.begin(), potions.end(), minPotion)-potions.begin();
            res.push_back(n-idx);
        }
        return res;
    }
};