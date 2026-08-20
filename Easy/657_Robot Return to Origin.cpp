//https://leetcode.com/problems/robot-return-to-origin/description/?envType=study-plan-v2&envId=programming-skills

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool judgeCircle(string moves) {
        int horizontal=0, vertical=0;
        for(auto input : moves){
            if(input=='U') vertical++;
            else if(input=='D') vertical--;
            else if(input=='R') horizontal++;
            else if(input=='L') horizontal--;
        }
        return horizontal==0 && vertical==0;
    }
};