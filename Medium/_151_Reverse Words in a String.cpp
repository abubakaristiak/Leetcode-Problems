//https://leetcode.com/problems/reverse-words-in-a-string/description/?envType=study-plan-v2&envId=leetcode-75

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int i=0; 
        int l=0, r=0;
        int n=s.length();

        while(i<n){
            while(i<n && s[i] != ' '){
                s[r++] = s[i++];
            }
            if(l<r){
                reverse(s.begin()+l, s.begin()+r);
                s[r]=' ';
                r++;
                l=r;
            }
            i++;

        }
        s=s.substr(0,r-1);
        return s;
    }
};


// another approach (using STL)
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;
        
        while(ss>>word){
            words.push_back(word);
        }
        reverse(words.begin(), words.end());
        string result;
        for(int i=0; i<words.size(); i++){
            if(i>0) result += ' ';
            result += words[i];
        }
        return result;
    }
};