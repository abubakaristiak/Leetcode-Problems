//https://leetcode.com/problems/repeated-substring-pattern/description/?envType=study-plan-v2&envId=programming-skills

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.length();
        for(int i=n/2; i>=1; i--){
            if(n%i == 0){
                int times = n/i;
                string pattern = s.substr(0, i);
                string newStr = "";
                while(times--){
                    newStr += pattern;
                }
                if(newStr == s) return true;
            }
        }
        return false;
    }
};