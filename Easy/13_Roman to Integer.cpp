//https://leetcode.com/problems/roman-to-integer/description/?envType=study-plan-v2&envId=programming-skills

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        unordered_map<char, int> sym={
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        int ans=sym[s[n-1]];
        for(int i=n-2; i>=0; i--){
            if(sym[s[i]] < sym[s[i+1]]){
                ans-=sym[s[i]];
            }
            else{
                ans+=sym[s[i]];
            }
        }
        return ans;
    }
};