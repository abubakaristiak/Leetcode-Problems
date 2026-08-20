//https://leetcode.com/problems/excel-sheet-column-title/description/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;
        while(columnNumber > 0){
            columnNumber--;
            int r = columnNumber%26;
            char ch = r+'A';
            res.push_back(ch);
            columnNumber/=26;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};