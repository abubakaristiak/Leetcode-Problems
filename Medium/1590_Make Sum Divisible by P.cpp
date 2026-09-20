#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        int sum = 0;

        for(int &num:nums){
            sum = (sum+num)%p;
        }
        int target = sum%p;
        if(target == 0){
            return 0;
        }


        unordered_map<int,int> mp;
        int cur = 0;
        mp[0] = -1;
        int result = n;
        
        for(int i=0; i<n; i++){
            cur = (cur+nums[i])%p;

            int rem = (cur-target+p)%p;
            if(mp.find(rem) != mp.end()){
                result = min(result, i-mp[rem]);
            }
            mp[cur] = i;
        }
        return result == n ? -1:result;
    }
};