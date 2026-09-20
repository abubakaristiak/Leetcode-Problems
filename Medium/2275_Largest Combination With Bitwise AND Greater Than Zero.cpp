// https://leetcode.com/problems/largest-combination-with-bitwise-and-greater-than-zero/description/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        vector<int> v(24,0);
        int res=0;
        for(int i=0; i<24; i++){
            for(int &num:candidates){
                if ((num & (1 << i)) != 0) {
                    v[i]++;
                }
            }
            res=max(res, v[i]);
        }
        return res;
    }
};




// Another approach with constant space
class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int res=0;
        for(int i=0; i<24; i++){
            int cnt=0;
            for(int &num:candidates){
                if ((num & (1 << i)) != 0) {
                    cnt++;
                }
            }
            res=max(res, cnt);
        }
        return res;
    }
};