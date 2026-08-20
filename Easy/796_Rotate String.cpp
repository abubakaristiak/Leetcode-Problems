//https://leetcode.com/problems/rotate-string/description/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        int m=goal.length();
        if(n!=m) return false;

        for(int i=1; i<=n; i++){
            rotate(s.begin(), s.begin()+1, s.end());
            if(s==goal) return true;
        }
        return false;
    }
};


// Another approach;
class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        int m=goal.length();
        if(n!=m) return false;

        if((s+s).find(goal)!=string::npos){
            return true;
        }
        return false;
    }
};