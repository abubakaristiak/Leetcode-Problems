/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-05 || 18:08:03
 * * * * File    : _2381_Shifting Letters II.cpp
 */



// https://leetcode.com/problems/shifting-letters-ii/description/



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
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n=s.size();
        vector<int> diff(n, 0);

        for(auto &shift:shifts){
            int start=shift[0];
            int end=shift[1];
            int dir=shift[2];

            if(dir==1){
                diff[start]+=1;
                if(end+1<n){
                    diff[end+1]-=1;
                }
            }else{
                diff[start]-=1;
                if(end+1<n){
                    diff[end+1]+=1;
                }
            }
        }

        for(int i=1; i<n; i++){
            diff[i]+=diff[i-1];
        }

        for(int i=0; i<n; i++){
            int shift=diff[i]%26;
            if(shift<0){
                shift+=26;
            }

            s[i]=((s[i]-'a'+shift)%26)+'a';

        }

        return s;
    }
};