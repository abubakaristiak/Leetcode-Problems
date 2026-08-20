//https://leetcode.com/problems/remove-digit-from-number-to-maximize-result/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeDigit(string number, char digit) {
        string maxstr = "";
        for(int i=0; i<number.length(); i++){
            if(number[i] == digit){
                string newstr = number.substr(0,i) + number.substr(i+1);
                if(newstr > maxstr){
                    maxstr = newstr;
                }
            }

        }
        return maxstr;
    }
};