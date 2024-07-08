//https://leetcode.com/problems/implement-stack-using-queues/description/
/*
class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        queue<int> newQ;
        int last;
        while(!q.empty()){
            int k = q.front();
            q.pop();
            if(q.empty()){
                last = k;
                break;
            }
            newQ.push(k);
        }
        q = newQ;
        return last;
    }
    
    int top() {
        queue<int> newQ;
        int last;
        while(!q.empty()){
            int k = q.front();
            q.pop();
            if(q.empty()){
                last = k;
            }
            newQ.push(k);
        }
        q = newQ;
        return last;
    }
    
    bool empty() {
       return q.empty(); 
    }
};
*/
