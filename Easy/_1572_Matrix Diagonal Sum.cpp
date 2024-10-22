//https://leetcode.com/problems/matrix-diagonal-sum/description/?envType=study-plan-v2&envId=programming-skills

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0; 
        for(int i=0; i<n; i++){
            sum+=mat[i][i];
            sum+=mat[i][n-i-1];
        }
        if(n%2==1){
            sum=sum-mat[n/2][n/2];
        }
        return sum;
    }
};