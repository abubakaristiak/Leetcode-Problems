//https://leetcode.com/problems/find-the-winner-of-the-circular-game/?envType=daily-question&envId=2024-07-08
/*
class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> ar;
        for(int i=1; i<=n; i++){
            ar.push_back(i);
        }
        int i=0;
        while(ar.size()>1){
            int idx = (i+k-1) % ar.size();

            ar.erase(ar.begin() + idx);
            i = idx;
        }
        return ar[0];
    }
};
*/


// another way using stack and queue;
/*
class Solution {
public:
    queue<int> q;
    int findTheWinner(int n, int k) {
        for(int i=1; i<=n; i++){
            q.push(i);
        }
        int cnt=0;
        while(q.size()>1){
            int v = q.front();
            q.pop();
            cnt++;
            if(cnt==k) cnt=0;
            else q.push(v);
        }
        return q.front();
    }
};
*/