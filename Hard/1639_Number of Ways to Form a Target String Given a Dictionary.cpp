/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-29 || 22:00:35
 * * * * File    : _1639_Number of Ways to Form a Target String Given a Dictionary.cpp
 */



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
    int m,k;
    const int mod=1e9+7;
    int t[1001][1001];

    int solve(int i, int j, vector<vector<ll>>& fre, string &target){
        if(i==m) return 1;
        if(j==k) return 0;
        if(t[i][j]!=-1) return t[i][j];

        int not_take=solve(i, j+1, fre, target)%mod;
        int take=(fre[target[i]-'a'][j] * solve(i+1, j+1, fre, target))%mod;
        return t[i][j]=(not_take+take)%mod;
    }



    
    int numWays(vector<string>& words, string target) {
        k=words[0].size();
        m=target.length();

        vector<vector<ll>> fre(26, vector<ll>(k));
        for(int col=0; col<k; col++){
            for(string &word:words){
                fre[word[col]-'a'][col]++;
            }
        }
        memset(t, -1, sizeof(t));
        return solve(0, 0, fre, target);

    }
};