/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-18 || 15:48:22
 * * * * File    : _1652_Defuse the Bomb.cpp
 */


// https://leetcode.com/problems/defuse-the-bomb/?envType=daily-question&envId=2024-11-18


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
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>res(n,0);

        if(k==0){
            return res;
        }

        for(int i=0; i<n; i++){
            if(k<0){
                for(int j=i-abs(k); j<i; j++){
                    res[i]+=code[(j+n)%n];
                }
            }else{
                for(int j=i+1; j<i+k+1; j++){
                    res[i]+=code[j%n];
                }
            } 
        }
        return res; 

    }
};