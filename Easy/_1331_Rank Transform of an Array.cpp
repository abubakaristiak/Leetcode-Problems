//https://leetcode.com/problems/rank-transform-of-an-array/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.empty()) return {};
        vector<int> tmp = arr;
        sort(tmp.begin(), tmp.end());


        map<int,int> mp;
        mp[tmp[0]] = 1;
        for(int i=1; i<tmp.size(); i++){
            if(tmp[i] > tmp[i-1]){
                mp[tmp[i]] = mp[tmp[i-1]]+1;
            }
            else{
                mp[tmp[i]] = mp[tmp[i-1]];
            }
        }
        vector<int> res;
        for(int x:arr){
            res.push_back(mp[x]);
        }
        return res;
    }
};