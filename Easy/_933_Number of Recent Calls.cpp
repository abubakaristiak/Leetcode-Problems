// https://leetcode.com/problems/number-of-recent-calls/description/?envType=study-plan-v2&envId=leetcode-75

#include<bits/stdc++.h>
using namespace std;
class RecentCounter {
public:
    RecentCounter() {
        
    }
    queue<int> q;
    int ping(int t) {
        if(q.empty()){
            q.push(t);
        }else{
            while(!q.empty() && q.front() < (t-3000)){
                q.pop();
            }
            q.push(t);
        }
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */