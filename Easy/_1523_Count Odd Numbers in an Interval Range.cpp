//https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/description/?envType=study-plan-v2&envId=programming-skills

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countOdds(int low, int high) {
        int OddCnt=0;
        for(int i=low; i<=high; i++){
            if(i%2==1){
                OddCnt++;
            }
        }
        return OddCnt;
    }
};