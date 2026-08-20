//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/?envType=study-plan-v2&envId=programming-skills

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string s1, string s2) {
        int m=s1.length();
        int n=s2.length();

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(s1[i+j] != s2[j]){
                    break;
                }
                if(j == n-1){
                    return i;
                }
            }
        }
        return -1;
    }
};