//https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/description/?envType=daily-question&envId=2024-10-09


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minAddToMakeValid(string s) {
        int size=0;
        int oper=0;

        for(char &ch:s){
            if(ch=='('){
                size++;
            }
            else if(size>0){
                size--;
            }
            else oper++;
        }
        return oper+size;
    }
};



// Different approach using stack;
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int oper=0;

        for(char &ch:s){
            if(ch=='('){
                st.push(ch);
            }
            else if(!st.empty()){
                st.pop();
            }
            else oper++;
        }
        return oper+st.size();
    }
};