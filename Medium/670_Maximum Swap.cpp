//https://leetcode.com/problems/maximum-swap/description/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        int n=s.length();
        vector<int> mxr(n);
        mxr[n-1]=n-1;
        for(int i=n-2; i>=0; i--){
            int rightMaxIdx=mxr[i+1];
            int rightMaxEle=s[rightMaxIdx];
            mxr[i]=(s[i] > rightMaxEle) ? i : rightMaxIdx;
        }
        for(int i=0; i<n; i++){
            int rightMaxIdx=mxr[i];
            int rightMaxEle=s[rightMaxIdx];
            if(s[i]<rightMaxEle){
                swap(s[i],s[rightMaxIdx]);
                return stoi(s);
            }
        }
        return num;
    }
};