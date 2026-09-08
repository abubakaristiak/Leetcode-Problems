// https://leetcode.com/problems/spiral-matrix/description/?envType=study-plan-v2&envId=programming-skills

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();

        vector<int> r;
        int dir=0;
        int top=0;
        int down=rows-1;
        int left=0;
        int right=cols-1;
        while(top <= down && left <= right){
            if(dir==0){
                for(int i=left; i<=right; i++){
                    r.push_back(matrix[top][i]);
                }
                top++;
            }
            if(dir==1){
                for(int i=top; i<=down; i++){
                    r.push_back(matrix[i][right]);
                }
                right--;
            }
            if(dir==2){
                for(int i=right; i>=left; i--){
                    r.push_back(matrix[down][i]);
                }
                down--;
            }
            if(dir==3){
                for(int i=down; i>=top; i--){
                    r.push_back(matrix[i][left]);
                }
                left++;
            }
            dir++;
            if(dir==4) dir=0;

        }
        return r;
    }
};