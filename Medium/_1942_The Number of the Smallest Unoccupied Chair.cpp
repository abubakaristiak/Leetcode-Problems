//https://leetcode.com/problems/the-number-of-the-smallest-unoccupied-chair/description/?envType=daily-question&envId=2024-10-11


// Brute force
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int n=times.size();
        vector<int> chairs(n,-1);

        int targetFriendArrivalTime=times[targetFriend][0];
        sort(times.begin(), times.end());

        for(vector<int>& time:times){
            int arrival=time[0];
            int depart=time[1];
            for(int i=0; i<n; i++){
                if(chairs[i]<=arrival){
                    chairs[i]=depart;
                    if(arrival==targetFriendArrivalTime){
                        return i;
                    }
                    break;
                }
            }
        }
        return -1;
    }
};




// Optimal Solution (Using Min-heap);
class Solution {
public:
    typedef pair<int, int>P;
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int n=times.size();
        priority_queue<P,vector<P>, greater<P>>occ;     //{departTime, chairNo}
        priority_queue<int,vector<int>, greater<int>>free; 

        int targetFriendArrivalTime=times[targetFriend][0];
        sort(begin(times), end(times));
        int chairNo=0;

        for(int i=0; i<n; i++){
            int arrival=times[i][0];
            int depart=times[i][1];
            while(!occ.empty() && occ.top().first<=arrival){
                free.push(occ.top().second);
                occ.pop();
            }

            if(free.empty()){
                occ.push({depart,chairNo});
                if(arrival==targetFriendArrivalTime){
                    return chairNo;
                }
                chairNo++;
            }
            else{
                int leastChair=free.top();
                free.pop();
                if(arrival==targetFriendArrivalTime){
                    return leastChair;
                }
                occ.push({depart,leastChair});
            }
        }
        return -1;
    }
};