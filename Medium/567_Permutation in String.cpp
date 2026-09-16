//https://leetcode.com/problems/permutation-in-string/?envType=daily-question&envId=2024-10-05

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        if(n>m) return false;
        sort(begin(s1),end(s1));

        for(int i=0; i<=m-n; i++){
            string sub = s2.substr(i,n);
            sort(begin(sub), end(sub));
            if(s1==sub) return true;
        }
        return false;
    }
};



// Sliding window
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        if(n>m) return false;
        
        vector<int> s1_fre(26,0);
        vector<int> s2_fre(26,0);

        for(char &ch:s1){
            s1_fre[ch-'a']++;
        }

        int i=0, j=0;
        while(j<m){
            s2_fre[s2[j]-'a']++;
            if(j-i+1 > n){
                s2_fre[s2[i]-'a']--;
                i++;
            }
            if(s1_fre == s2_fre) return true;
            j++;
        }
        return false;

    }
};
