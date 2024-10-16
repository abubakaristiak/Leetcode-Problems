//https://leetcode.com/problems/palindrome-number/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        bool flag=true;
        if(x>0){
            string s = to_string(x);
            int i=0, j=s.length()-1;
            while (i<j)
            {
                if(s[i]!=s[j]){
                    flag=false;
                    break;
                }
                i++;
                j--;
            }   
        }
        if(x<0) return false;
        if(flag) return true;
        else return false;
        }
};