//https://leetcode.com/problems/min-stack/description/
/*
class MinStack {
public:
    stack<int> st,mn;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push(val);
            mn.push(val);
            return;
        }
        int min_val = min(val, mn.top());
        mn.push(min_val);
        st.push(val);
    }
    
    void pop() {
        if(st.empty()) return;
        else {
            st.pop();
            mn.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mn.top();
    }
};

*/