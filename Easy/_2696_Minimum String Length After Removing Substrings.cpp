//https://leetcode.com/problems/minimum-string-length-after-removing-substrings/description/?envType=daily-question&envId=2024-10-07

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minLength(string s) {
        int n=s.length();

        int i=0;
        int j=1;
        while(j<n){
            if(i<0){
                i++;
                s[i] = s[j];
            }
            else if((s[i]=='A' && s[j]=='B') || (s[i]=='C' && s[j]=='D')){
                i--;
            }
            else{
                i++;
                s[i] = s[j];
            }
            j++;
        }
        return i+1;
    }
};