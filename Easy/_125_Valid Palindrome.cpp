//https://leetcode.com/problems/valid-palindrome/description/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int f=0;
        int l=s.size()-1;
        while(f<=l){
            if(!isalnum(s[f])){
                f++;
                continue;
            }
            if(!isalnum(s[l])){
                l--;
                continue;
            }
            if(tolower(s[f]) != tolower(s[l])){
                return false;
            }
            else{
                f++;
                l--;
            }
        }
        return true;
    }
};