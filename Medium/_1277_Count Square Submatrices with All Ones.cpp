//https://leetcode.com/problems/count-square-submatrices-with-all-ones/?envType=daily-question&envId=2024-10-27

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rows, cols;
    int solve(int i, int j, vector<vector<int>>& matrix, vector<vector<int>> &t){
        if(i>=rows || j>=cols) return 0;
        if(matrix[i][j]==0) return 0;
        if(t[i][j]!=-1) return t[i][j];
        int right=solve(i,j+1,matrix,t);
        int dia = solve(i+1, j+1, matrix,t);
        int below = solve(i+1, j, matrix,t);
        return t[i][j]=1+min({right,dia,below});
    }


    int countSquares(vector<vector<int>>& matrix) {
        rows=matrix.size();
        cols=matrix[0].size();

        int res=0;
        vector<vector<int>> t(rows+1, vector<int>(cols+1, -1));
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(matrix[i][j]==1){
                    res += solve(i,j,matrix,t);
                }
            }
        }
        return res;
    }
};