//https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/description/?envType=study-plan-v2&envId=programming-skills

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double average(vector<int>& s) {
        double ans=0,res;

        int mx=0, mn=INT_MAX;
        for(int i=0; i<s.size(); i++){
            mn = min(mn, s[i]);
            mx = max(mx, s[i]);
            ans += s[i];
        }
        res = ans-mx-mn;
        res = res/(s.size()-2);
        return res;

    }
};