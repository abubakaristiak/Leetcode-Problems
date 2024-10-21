//https://leetcode.com/problems/split-a-string-into-the-max-number-of-unique-substrings/description/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(string s,int i, unordered_set<string> &st, int curCnt, int &mxCnt){
        if(curCnt + (s.length()-1) <= mxCnt){
            return;
        } 
        if(i>=s.length()){
            mxCnt=max(mxCnt,curCnt);
            return;
        }
        for(int j=i; j<s.length(); j++){
            string sub = s.substr(i, j-i+1);
            if(st.find(sub)==st.end()){
                st.insert(sub);
                solve(s,j+1,st,curCnt+1,mxCnt);
                st.erase(sub);
            }
        }
    }
    int maxUniqueSplit(string s) {
        unordered_set<string> st;
        int mxCnt=0;
        int curCnt=0;
        int i=0;
        solve(s,i,st,curCnt,mxCnt);
        return mxCnt;
    }
};