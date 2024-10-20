//https://leetcode.com/problems/find-the-highest-altitude/description/?envType=study-plan-v2&envId=leetcode-75

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int cur=0;
        int mx=0;
        int n=gain.size();
        for(int i=0; i<n; i++){
            cur += gain[i];
            mx = max(mx,cur);
        }
        return mx;
    }
};