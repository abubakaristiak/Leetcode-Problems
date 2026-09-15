// https://leetcode.com/problems/removing-stars-from-a-string/description/?envType=study-plan-v2&envId=leetcode-75

#include<bits/stdc++.h>
using namespace std;

// 1st Approach using Stack;
class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='*'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string res="";
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};


// 2nd Apporach using String;
class Solution {
public:
    string removeStars(string s) {
        string res="";
        for(int i=0; i<s.length(); i++){
            if(s[i]=='*'){
                res.pop_back();
            }
            else{
                res.push_back(s[i]);
            }
        }
        return res;
    }
};



// 3rd Approach using Vector;
class Solution {
public:
    string removeStars(string s) {
        int n=s.length();
        vector<char> v(n);
        
        int j=0; 
        for(int i=0; i<n; i++){
            if(s[i]=='*'){
                j--;
            }
            else{
                v[j]=s[i];
                j++;
            }
        }
        string res="";
        for(int i=0; i<=j-1; i++){
            res.push_back(v[i]);
        }
        return res;
    }
};