//https://leetcode.com/problems/happy-number/description/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumSquare(int num){
        int sum=0; 
        while(num){
            int d=num%10;
            sum+=d*d;
            num/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        if(n<=0) return false;
        unordered_set<int> us;
        while(us.find(n)==us.end()){
            us.insert(n);
            n = sumSquare(n);
            if(n==1) return true;
        }
        return false;
    }
};