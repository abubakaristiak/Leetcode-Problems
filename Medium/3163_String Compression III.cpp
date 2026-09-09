// https://leetcode.com/problems/string-compression-iii/description/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string compressedString(string word) {
        int n=word.length();
        string cmp="";
        int i=0; 
        while(i<n){
            char ch=word[i];
            int cnt=0;
            while(cnt<9 && word[i]==ch){
                cnt++;
                i++;
            }
            cmp+=to_string(cnt)+ch;
        }
        return cmp;

    }
};