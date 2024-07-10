//https://leetcode.com/problems/crawler-log-folder/
/*
class Solution {
public:
    int minOperations(vector<string>& logs) {
       int depth = 0;

       for(string &log: logs){
            if(log == "../"){
                depth--;
                if(depth<0){
                    depth = 0;
                }
            }
            else if(log == "./"){
                continue;
            }
            else{
                depth++;
            }
               
            
       } 
       return depth;
    }
};
*/


// another approach;
/*
class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;

        for(string s: logs){
            if(s == "../"){
                if(!st.empty()){
                    st.pop();
                }
            }
            else if(s =="./"){
                continue;
            }
            else{
                st.push(s);
            }
        }
        return st.size();
    }
};
*/