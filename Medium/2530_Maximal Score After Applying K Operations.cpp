//https://leetcode.com/problems/maximal-score-after-applying-k-operations/description/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long sum=0;
        priority_queue<int> pq(nums.begin(), nums.end());

        while(k--){
            int max_element=pq.top();
            pq.pop();
            sum+=max_element;
            max_element=ceil(max_element/3.0);
            pq.push(max_element);
        }
        return sum;

    }
};