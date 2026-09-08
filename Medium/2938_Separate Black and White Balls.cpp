//https://leetcode.com/problems/separate-black-and-white-balls/description/

// Left to Right;
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long minimumSteps(string s) {
        int n=s.size();
        long long swap_count=0;
        int black_ball=0;

        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                swap_count+=black_ball;
            }else{
                black_ball++;
            }
        }
        return swap_count;
    }
};



// Right to Left;
class Solution {
public:
    long long minimumSteps(string s) {
        int n=s.size();
        long long swap_count=0;
        int white_ball=0;

        for(int i=n-1; i>=0; i--){
            if(s[i]=='1'){
                swap_count+=white_ball;
            }else{
                white_ball++;
            }
        }
        return swap_count;
    }
};