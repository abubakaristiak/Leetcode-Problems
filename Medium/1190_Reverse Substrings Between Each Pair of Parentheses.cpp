//https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/
/*
class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.length();
        stack<char> st;
        for(int i=0; i<n; i++){
            if(s[i]==')'){
                string curr = "";
                while(st.top() !='('){
                    curr +=st.top();
                    st.pop();
                }
                st.pop();
                for(auto &it: curr){
                    st.push(it);
                }
            }
            else{
                st.push(s[i]);
            }    
        }
        string curr = "";
        while(!st.empty()){
            curr +=st.top();
            st.pop();
        }
        reverse(curr.begin(), curr.end());
        return curr;
    }
};
*/