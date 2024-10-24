// https://leetcode.com/problems/unique-number-of-occurrences/description/?envType=study-plan-v2&envId=leetcode-75

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int &x:arr){
            mp[x]++;
        } 
        unordered_set<int> st;
        for(auto &it:mp){
            int freq = it.second;
            if(st.find(freq) != st.end()){
                return false;
            }
            st.insert(freq);
        }
        return true;
    }
};