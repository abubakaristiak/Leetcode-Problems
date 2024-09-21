// https://leetcode.com/problems/check-if-every-row-and-column-contains-all-numbers/description/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int sz = matrix.size();

        for(int i=0; i<sz; i++){
            set<int> s;
            for(int j=0; j<sz; j++){
                s.insert(matrix[i][j]);
            }
            if(s.size() != sz) return false;
        }

        for(int i=0; i<sz; i++){
            set<int> s;
            for(int j=0; j<sz; j++){
                s.insert(matrix[j][i]);
            }
            if(s.size() != sz) return false;
        }
        return true;


    }
};