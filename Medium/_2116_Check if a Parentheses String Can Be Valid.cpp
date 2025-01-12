/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-12 || 18:26:16
 * * * * File    : _2116_Check if a Parentheses String Can Be Valid.cpp
 */



// https://leetcode.com/problems/check-if-a-parentheses-string-can-be-valid/description/




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
    bool canBeValid(string s, string locked) {
        int n=s.length();

        if(n%2!=0){
            return false;
        }
        stack<int> open, openClose;
        for(int i=0; i<n; i++){
            if(locked[i]=='0'){
                openClose.push(i);
            }else if(s[i]=='('){
                open.push(i);
            }else if(s[i]==')'){
                if(!open.empty()){
                    open.pop();
                }else if(!openClose.empty()){
                    openClose.pop();
                }else{
                    return false;
                }
            }
        }

        while (!open.empty() && !openClose.empty() && open.top()<openClose.top())
        {
            open.pop();
            openClose.pop();
        }

        return open.empty();
        
    }
};