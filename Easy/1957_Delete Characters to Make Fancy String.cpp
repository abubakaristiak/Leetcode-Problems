//https://leetcode.com/problems/delete-characters-to-make-fancy-string/description/?envType=daily-question&envId=2024-11-01

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string makeFancyString(string s) {
        int n=s.length();
        string res="";
        res.push_back(s[0]);
        int cnt=1;
        
        for(int i=1; i<n; i++){
            if(s[i]==res.back()){
                cnt++;
                if(cnt<3){
                    res.push_back(s[i]);
                }
            }else{
                res.push_back(s[i]);
                cnt=1;
            }
        }
        return res;
    }
};