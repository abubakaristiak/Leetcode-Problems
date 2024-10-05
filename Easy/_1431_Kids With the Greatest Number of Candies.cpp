//https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/?envType=study-plan-v2&envId=leetcode-75

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        int n = c.size();
        int mx = INT_MIN;
        for(int i=0; i<n; i++){
            if(c[i]>mx){
                mx = c[i];
            }
        }
        vector<bool> v(n,false);
        for(int i=0; i<n; i++){
            if(c[i]+e >= mx){
                v[i] = true;
            }
            
        }
        return v;

    }
};