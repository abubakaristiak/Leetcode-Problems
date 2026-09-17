// https://leetcode.com/problems/longest-happy-string/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    typedef pair<int,char> P;
    string longestDiverseString(int a, int b, int c) {
        priority_queue<P, vector<P>> pq;
        if(a>0) pq.push({a,'a'});
        if(b>0) pq.push({b,'b'});
        if(c>0) pq.push({c,'c'});

        string res="";
        while(!pq.empty()){
            int curCount=pq.top().first;
            int curChar=pq.top().second;
            pq.pop();
            if(res.length()>=2 && res[res.length()-1]==curChar && res[res.length()-2]==curChar){
                if(pq.empty()){
                    break;
                }

                
                int nextCount=pq.top().first;
                int nextChar=pq.top().second;
                pq.pop();
                res.push_back(nextChar);
                nextCount--;
                if(nextCount>0){
                    pq.push({nextCount, nextChar});
                }
            }
            
            else{
                curCount--;
                res.push_back(curChar);
            }
            if(curCount>0){
                pq.push({curCount, curChar});
            }
        }
        return res;

    }
};