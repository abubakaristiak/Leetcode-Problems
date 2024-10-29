//https://leetcode.com/problems/decode-string/description/?envType=study-plan-v2&envId=leetcode-75

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for(int i=0; i<s.size(); i++){
            if(s[i] != ']'){
                st.push(s[i]);
            }
            else{
                string curStr = "";
                while(st.top() != '['){
                    curStr=st.top()+curStr;
                    st.pop();
                }
                st.pop();
                string num="";
                while(!st.empty() && isdigit(st.top())){
                    num=st.top()+num;
                    st.pop();
                }
                int times=stoi(num);
                while(times--){
                    for(int j=0; j<curStr.size(); j++){
                        st.push(curStr[j]);
                    }
                }
            }

        }
        s="";
        while(!st.empty()){
            s=st.top()+s;
            st.pop();
        }
        return s;
    }
};