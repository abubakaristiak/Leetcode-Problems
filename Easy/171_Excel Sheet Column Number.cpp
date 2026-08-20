//https://leetcode.com/problems/excel-sheet-column-number/description/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int titleToNumber(string s) {
        int res=0;
        for(char ch:s){
            int d = ch - 'A'+1;
            res = res*26 + d;
        }
        return res;
        
    }
};