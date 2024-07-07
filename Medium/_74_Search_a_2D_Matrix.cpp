//https://leetcode.com/problems/search-a-2d-matrix/
/*
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int left=0, right=n*m-1;
        while(left <= right){
            int mid = (left+right)/2;
            int row = mid/m;
            int col = mid%m;

            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]<target){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return false;

    }
};
*/