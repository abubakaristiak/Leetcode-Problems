//https://leetcode.com/problems/robot-bounded-in-circle/description/?envType=study-plan-v2&envId=programming-skills

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isRobotBounded(string instructions) {
        pair<int, int> p(0,0);
        string dir="North";

        for(int i=0; i<instructions.size(); i++){
            if(instructions[i]=='G'){
                if(dir=="North") p.second++;
                else if(dir=="South") p.second--;
                else if(dir=="East") p.first++;
                else p.first--;
            }
            else if(instructions[i]=='L'){
                if(dir=="North") dir="West";
                else if(dir=="South") dir="East";
                else if(dir=="West") dir="South";
                else dir="North";
            }
            else if(instructions[i]=='R'){
                if(dir=="North") dir="East";
                else if(dir=="South") dir="West";
                else if(dir=="West") dir="North";
                else dir="South";
            } 
        }
        if(dir=="North" && (p.first!=0 || p.second!=0)) return false;
        else return true;
    }
};