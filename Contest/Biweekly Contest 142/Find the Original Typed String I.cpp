//https://leetcode.com/contest/biweekly-contest-142/problems/find-the-original-typed-string-i/description/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int possibleStringCount(string word) {
        int totalCnt=1;
        int n=word.size();
        for(int i=0; i<n; i++){
            int cnt=0;
            while(i+1<n && word[i]==word[i+1]){
                cnt++;
                i++;
            }
            totalCnt+=cnt;
        }
        return totalCnt;
    }
};