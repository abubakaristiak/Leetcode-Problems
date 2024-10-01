//https://leetcode.com/problems/check-if-array-pairs-are-divisible-by-k/?envType=daily-question&envId=2024-10-01

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> map(k,0);
        for(int &num : arr){
            int r = (num%k + k) % k;
            map[r]++;
        }
        if(map[0]%2 != 0){
            return false;
        }
        for(int r=1; r<=k/2; r++){
            int half = k-r;
            if(map[half] != map[r]){
                return false;
            }
        }
        return true;
    }
};