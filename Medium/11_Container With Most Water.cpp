//https://leetcode.com/problems/container-with-most-water/description/?envType=study-plan-v2&envId=leetcode-75

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1;
        int mxW=0;
        while(i<j){
            int w=j-i;
            int h=min(height[i],height[j]);
            int area = w*h;
            mxW=max(mxW, area);
            if(height[i]>height[j]){
                j--;
            }else{
                i++;
            }
        }
        return mxW;
    }
};