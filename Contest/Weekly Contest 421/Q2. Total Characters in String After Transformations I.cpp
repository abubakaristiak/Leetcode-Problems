//https://leetcode.com/contest/weekly-contest-421/problems/total-characters-in-string-after-transformations-i/description/

// Not solved wrong answer;
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        const int MOD = 1e9+7;
        long long length = s.size();

        long long cntZ=0;
        for(char c:s){
            if(c=='z'){
                cntZ++;
            }
        }

        for(int i=0; i<t; i++){
            length=(length+cntZ) % MOD;
            cntZ=(cntZ*2) % MOD;
        }
        return length;
    }
};