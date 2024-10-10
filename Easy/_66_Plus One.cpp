//https://leetcode.com/problems/plus-one/description/?envType=study-plan-v2&envId=programming-skills

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int idx = digits.size()-1;
        while(idx>=0){
            if(digits[idx]==9){
                digits[idx]=0;
            }
            else{
                digits[idx]+=1;
                return digits;
            }
            idx--; 
        }
        digits.insert(digits.begin(),1);
        return digits;  
    }
};