/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-30 || 16:53:05
 * * * * File    : _2097_Valid Arrangement of Pairs.cpp
 */



// https://leetcode.com/problems/valid-arrangement-of-pairs/description/


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
    vector<vector<int>> validArrangement(vector<vector<int>>& pairs) {
        unordered_map<int, vector<int>> adj;
        unordered_map<int,int> indeg;
        unordered_map<int,int> outdeg;

        for(auto &edge:pairs){
            int u=edge[0];
            int v=edge[1];
            adj[u].push_back(v);
            outdeg[u]++;
            indeg[v]++;
        }

        int snode=pairs[0][0];
        for(auto &it:adj){
            int node=it.first;
            if(outdeg[node]-indeg[node]==1){
                snode=node;
                break;
            }
        }

        vector<int> EulerPath;
        stack<int> st;
        st.push(snode);

        while(!st.empty()){
            int cur=st.top();
            if(!adj[cur].empty()){
                int nbr=adj[cur].back();
                adj[cur].pop_back();
                st.push(nbr);
            }else{
                EulerPath.push_back(cur);
                st.pop();
            }
        }


        reverse(EulerPath.begin(), EulerPath.end());
        vector<vector<int>> res;
        for(int i=0; i<EulerPath.size()-1; i++){
            res.push_back({EulerPath[i], EulerPath[i+1]});
        }
        return res;

    }
};