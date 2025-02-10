/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-10 || 10:08:31
 * * * * File    : _3174_Clear Digits.cpp
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


// Brute force
class Solution {
public:
    string clearDigits(string s) {
        int n=s.size();
        int i=0; 
        while (i<n)
        {
            if(isdigit(s[i])){
                s.erase(i,1);
                if(i-1>=0){
                    s.erase(i-1, 1);
                    i--;
                }
            }else{
                i++;
            }
        }
        return s;
        
    }
};


    


// another approach by using stack
class Solution {
    public:
        string clearDigits(string s) {
            stack<char> st;
            for(char &ch:s){
                if(isdigit(ch)){
                    if(!st.empty()){
                        st.pop();
                    }
                }else{
                    st.push(ch);
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