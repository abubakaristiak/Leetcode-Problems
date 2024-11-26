/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-26 || 12:55:32
 * * * * File    : _2924_Find Champion II.cpp
 */


// https://leetcode.com/problems/find-champion-ii/description/?envType=daily-question&envId=2024-11-26


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
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> vcc(n,0);
        for(vector<int> &edge:edges){
            int u=edge[0];
            int v=edge[1];
            vcc[v]++;
        }
        int champ=-1;
        int count=0;
        for(int i=0; i<n; i++){
            if(vcc[i]==0){
                champ=i;
                count++;
                if(count>1){
                    return -1;
                }
            }
        }
        return champ;

    }
};