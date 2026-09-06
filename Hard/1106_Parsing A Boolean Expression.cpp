//https://leetcode.com/problems/parsing-a-boolean-expression/?envType=daily-question&envId=2024-10-20

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    char solve(vector<char> &v, char op){
        if(op=='!') 
            return v[0]=='t'? 'f':'t';
        if(op=='&'){
            for(char &ch:v){
                if(ch=='f') return 'f';
            }
            return 't';
        }
        if(op=='|'){
            for(char &ch:v){
                if(ch=='t') return 't';
            }
            return 'f';
        }
        return 't';
    }
    bool parseBoolExpr(string s) {
        int n=s.size();
        stack<char> st;
        for(int i=0; i<n; i++){
            if(s[i]==',') continue;
            if(s[i]==')'){
                vector<char> v;
                while(st.top()!='('){
                    v.push_back(st.top());
                    st.pop();
                }
                st.pop();
                char op=st.top();
                st.pop();
                st.push(solve(v,op));
            }
            else{
                st.push(s[i]);
            }
        }
        return st.top()=='t';
    }
};