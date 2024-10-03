//https://leetcode.com/problems/merge-strings-alternately/?envType=study-plan-v2&envId=leetcode-75

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        for(int i=0; i<word1.length() || i<word2.length(); i++){
            if(i<word1.length()) result += word1[i];
            if(i<word2.length()) result += word2[i];
        }
        return result;
    }
};