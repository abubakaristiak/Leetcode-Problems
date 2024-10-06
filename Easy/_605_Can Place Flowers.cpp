//https://leetcode.com/problems/can-place-flowers/description/?envType=study-plan-v2&envId=leetcode-75

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len=flowerbed.size();

        if(n==0) return true;
        for(int i=0; i<len; i++){
            if(flowerbed[i]==0){
                bool left = (i==0) || (flowerbed[i-1]==0);
                bool right = (i==len-1) || (flowerbed[i+1]==0);
                if(left && right){
                    flowerbed[i]=1;
                    n--;
                    if(n==0) return true;
                }
            }
        }
        return false;
    }
};