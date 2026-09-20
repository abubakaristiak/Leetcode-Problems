/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-03 || 19:50:51
 * * * * File    : _2109_Adding Spaces to a String.cpp
 */


// https://leetcode.com/problems/adding-spaces-to-a-string/description/?envType=daily-question&envId=2024-12-03



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
    string addSpaces(string s, vector<int>& spaces) {
        int m=s.length();
        int n=spaces.size();
        string res="";

        int j=0;
        for(int i=0; i<m; i++){
            if(j<n && i==spaces[j]){
                res+=" ";
                j++;
            }
            res+=s[i];
        }
        return res;
    }
};
