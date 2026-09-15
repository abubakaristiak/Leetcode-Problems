//https://leetcode.com/problems/divide-players-into-teams-of-equal-skill/?envType=daily-question&envId=2024-10-04

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        sort(skill.begin(), skill.end());

        int i=0; 
        int j=n-1;
        int s=skill[i] + skill[j];
        long long chy = 0;
        while(i<j){
            int cur = skill[i] + skill[j];
            if(cur != s){
                return -1;
            }
            chy += (long long)(skill[i]) * (long long)(skill[j]);
            i++;
            j--;

        }
        return chy;
    }
};