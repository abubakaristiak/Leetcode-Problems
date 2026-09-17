//https://leetcode.com/problems/asteroid-collision/description/?envType=study-plan-v2&envId=leetcode-75

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int &num : asteroids){
            while(!st.empty() && num<0 && st.top()>0){
                int sum=num+st.top();
                if(sum<0){
                    st.pop();
                }else if(sum>0){
                    num=0;
                }else{
                    st.pop();
                    num=0;
                }
            }
            if(num!=0){
                st.push(num);
            }
        }
        int s=st.size();
        vector<int> res(s);
        int i=s-1;
        while(!st.empty()){
            res[i]=st.top();
            st.pop();
            i--;
        }
        return res;
    }
};