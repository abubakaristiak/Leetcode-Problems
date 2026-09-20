/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-11 || 09:33:28
 * * * * File    : _1910_Remove All Occurrences of a Substring.cpp
*/


// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/?envType=daily-question&envId=2025-02-11


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


// Brute force
class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (true)
        {
            int idx=s.find(part);

            if(idx==string::npos){
                break;
            }
            s.erase(idx, part.length());
        }
        return s; 
    }
};




// another approach by using stack
class Solution {
public:
    bool isCheck(stack<char> &st, string part, int n){
        stack<char> tmpSt=st;
        for(int i=n-1; i>=0; i--){
            if(tmpSt.top()!=part[i]){
                return false;
            }
            tmpSt.pop();
        }
        return true;
    }


    string removeOccurrences(string s, string part) {
        stack<char> st;
        int m=s.length();
        int n=part.length();

        for(int i=0; i<m; i++){
            st.push(s[i]);
            if(st.size()>=n && isCheck(st, part, n)==true){
                for(int j=0; j<n; j++){
                    st.pop();
                }
            }
        }

        string res="";
        while (!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());  
        return res;
    }
    
};