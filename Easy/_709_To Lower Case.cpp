//https://leetcode.com/problems/to-lower-case/description/?envType=study-plan-v2&envId=programming-skills

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string toLowerCase(string s) {
        int n=s.length();
        for(int i=0; i<n; i++){
            if(s[i]>=65 && s[i]<=90){
                s[i] = s[i]+32;
            }
        }
        return s;
    }
};



// Another approach using STL
class Solution {
public:
    string toLowerCase(string s) {
    int n=s.length();

    for(int i=0; i<n; i++) 
        s[i]=tolower(s[i]);
    return s;
    }
};