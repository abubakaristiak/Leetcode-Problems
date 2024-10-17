//https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/description/?envType=study-plan-v2&envId=leetcode-75

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isVowel(char &ch){
        return ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }
    int maxVowels(string s, int k) {
        int n=s.length();
        int i=0,j=0;
        int mxVowel=0;
        int cnt=0;

        while(j<n){
            if(isVowel(s[j])) cnt++;
            if(j-i+1==k){
                mxVowel=max(mxVowel,cnt);
                if(isVowel(s[i])) cnt--;
                i++;
            }
            j++;
        }
        return mxVowel;
    }
};