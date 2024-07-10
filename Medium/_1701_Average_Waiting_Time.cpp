//https://leetcode.com/problems/average-waiting-time/
/*
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& ar) {
        double coustom_wait = 0;
        double arrival_time = ar[0][0];
        double dur = ar[0][1];
        double chef_free = 0;
        double total_time = arrival_time + dur + chef_free;

        coustom_wait = total_time - arrival_time;

        for (int i = 1; i < ar.size(); i++) {
            arrival_time = ar[i][0];
            dur = ar[i][1];

            if (total_time > arrival_time) 
            {
                chef_free = total_time - arrival_time;
            } 
            else 
            {
                chef_free = 0;
            }
            total_time = arrival_time + dur + chef_free;
            coustom_wait += (total_time - arrival_time);
        }
        return coustom_wait / ar.size();
    }
};
*/