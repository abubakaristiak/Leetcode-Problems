//https://leetcode.com/problems/equal-row-and-column-pairs/description/?envType=study-plan-v2&envId=leetcode-75

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        int cnt=0;
        for(int r=0; r<n; r++){
            for(int c=0; c<n; c++){
                bool isEqual=true;
                for(int i=0; i<n; i++){
                    if(grid[r][i]!=grid[i][c]){
                        isEqual=false;
                        break;
                    }
                }
                if(isEqual) cnt++;
            }
        }
        return cnt;
    }
};



// Different approach using map
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        int cnt=0;;
        map<vector<int>,int> mp;
        
        for(int r=0; r<n; r++){
            mp[grid[r]]++;
        }
        for(int c=0; c<n; c++){
            vector<int> tmp;
            for(int r=0; r<n; r++){
                tmp.push_back(grid[r][c]);
            }
            cnt+=mp[tmp];
        }
        return cnt;
    }
};