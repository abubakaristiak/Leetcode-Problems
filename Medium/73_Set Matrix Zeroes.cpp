//https://leetcode.com/problems/set-matrix-zeroes/description/?envType=study-plan-v2&envId=programming-skills

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        vector<vector<int>> res=matrix;

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(matrix[i][j]==0){
                    for(int k=0; k<cols; k++){
                        res[i][k]=0;
                    }
                }
            }
        }
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(matrix[i][j]==0){
                    for(int k=0; k<rows; k++){
                        res[k][j]=0;
                    }
                }
            }
        }
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                matrix[i][j] = res[i][j];
            }
        }
        
    }
};