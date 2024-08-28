/*
TODO: https://leetcode.com/problems/top-k-frequent-elements/

class cmp{
    public:
        bool operator()(pair<int, int>&a, pair<int, int>&b){
            if(a.second < b.second) return true;
            else return false;
        }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freq;
        for(auto single_num: nums){
            freq[single_num]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq;
        for(auto it : freq){
            pq.push({it.first, it.second});
        }
        vector<int> v;
        while(k--){
            pair<int, int> element = pq.top();
            pq.pop();
            v.push_back(element.first);
        }
        return v;

    }
};
*/