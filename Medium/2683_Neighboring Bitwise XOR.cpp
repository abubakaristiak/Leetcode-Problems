/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-17 || 20:17:31
 * * * * File    : _2683_Neighboring Bitwise XOR.cpp
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
    bool doesValidArrayExist(vector<int>& derived) {
        int n=derived.size();
        vector<int> org(n);
        org[0]=0;
        for(int i=0; i<n-1; i++){
            org[i+1]=org[i]^derived[i];
        }
        if((org[n-1]^org[0])==derived[n-1]){
            return true;
        }


        org[0]=1;
        for(int i=0; i<n-1; i++){
            org[i+1]=org[i]^derived[i];
        }
        if((org[n-1]^org[0])==derived[n-1]){
            return true;
        }
        return false;
    }
};