//https://leetcode.com/problems/design-a-stack-with-increment-operation/description/?envType=daily-question&envId=2024-09-30

#include<bits/stdc++.h>
using namespace std;
class CustomStack {
public:
    vector<int> st;
    vector<int> incre;
    int n; 
    CustomStack(int maxSize) {
        n = maxSize;
    }
    
    void push(int x) {
        if(st.size() < n){
            st.push_back(x);
            incre.push_back(0);
        }
    }
    
    int pop() {
        if(st.size() == 0){
            return -1;
        }
        int idx = st.size() - 1;
        if(idx > 0){
            incre[idx-1] += incre[idx]; 
        }
        int top_value = st[idx] + incre[idx];
        st.pop_back();
        incre.pop_back();
        return top_value;
    }
    
    void increment(int k, int val) {
        int idx = min(k, (int)st.size())-1;
        if(idx >= 0){
            incre[idx] +=val;
        }
    }
};
