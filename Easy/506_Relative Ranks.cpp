/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-01 || 22:17:43
 * * * * File    : _506_Relative Ranks.cpp
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
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>> pq;
        int n=score.size();
        for(int i=0; i<n; i++){
            pq.push({score[i], i});
        }
        vector<string> res(n);
        int pos=1;
        while (!pq.empty())
        {
            int idx=pq.top().second;
            pq.pop();
            if(pos==1){
                res[idx]="Gold Medal";
            }else if(pos==2){
                res[idx]="Silver Medal";
            }else if(pos==3){
                res[idx]="Bronze Medal";
            }
            else{
                res[idx]=to_string(pos);
            }
            pos++;
        }
        return res;
        
        
    }
};