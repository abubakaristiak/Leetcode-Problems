//https://leetcode.com/problems/check-if-it-is-a-straight-line/description/?envType=study-plan-v2&envId=programming-skills

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n=coordinates.size();
        int dy=coordinates[1][1]-coordinates[0][1];
        int dx=coordinates[1][0]-coordinates[0][0];

        for(int i=2; i<n; i++){
            int dyi=coordinates[i][1]-coordinates[0][1];
            int dxi=coordinates[i][0]-coordinates[0][0];

            if(dyi*dx != dxi*dy) return false;
        }
        return true;
    }
};