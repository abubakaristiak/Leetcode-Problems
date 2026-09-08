//https://leetcode.com/problems/integer-to-roman/description/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string intToRoman(int num) {
        vector<int> val{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> sym{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        

        string res="";
        for(int i=0; i<13; i++){
            if(num==0){
                break;
            }
            int t=num/val[i];
            while(t--){
                res+=sym[i];
            }
            num = num%val[i];
        }
        return res;
    }
};
