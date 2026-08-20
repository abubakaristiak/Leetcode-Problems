//https://leetcode.com/problems/implement-queue-using-stacks/description/
/*
class MyQueue {
public:
    stack <int> st;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        stack <int> newSt;
        int last;
        while(!st.empty()){
            int k = st.top();
            st.pop();
            if(st.empty()){
                last = k;
                break;
            }
            newSt.push(k);
        }
        while(!newSt.empty()){
            st.push(newSt.top());
            newSt.pop();
        }
        return last;
    }
    
    int peek() {
        stack <int> newSt;
        int last;
        while(!st.empty()){
            int k = st.top();
            st.pop();
            if(st.empty()){
                last = k;
            }
            newSt.push(k);
        }
        while(!newSt.empty()){
            st.push(newSt.top());
            newSt.pop();
        }
        return last;
    }
    
    bool empty() {
      return st.empty();  
    }
};
*/