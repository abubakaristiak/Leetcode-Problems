/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-05 || 11:49:31
 * * * * File    : _2337_Move Pieces to Obtain a String.cpp
 */


// https://leetcode.com/problems/move-pieces-to-obtain-a-string/description/



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
    bool canChange(string start, string target) {
        int n=start.length();
        int i=0, j=0;
        while(i<n || j<n){
            while(i<n && start[i]=='_'){
                i++;
            }
            while(j<n && target[j]=='_'){
                j++;
            }
            if(i==n || j==n){
                return i==n && j==n;
            }
            if(start[i]!=target[j]){
                return false;
            }
            if(start[i]=='L' && i<j){
                return false;
            }
            if(start[i]=='R' && i>j){
                return false;
            }
            i++, j++;
        }
        return true;
    }
};
