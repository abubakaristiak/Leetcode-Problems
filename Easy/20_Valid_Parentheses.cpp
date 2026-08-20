//https://leetcode.com/problems/valid-parentheses/
/*
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c:s){
            if(c=='(' || c=='{' || c=='['){
                st.push(c);
            }
            else{
                if(st.empty()){
                    return false;
                }
                else{
                    if(c==')' && st.top()=='('){
                        st.pop();
                    }
                    else if(c=='}' && st.top()=='{'){
                        st.pop();
                    }
                    else if(c==']' && st.top()=='['){
                        st.pop();
                    }
                    else{
                        return false;
                    }

                }
            }
        }
        return st.empty(); 
    }
};
*/




// another way (need to explain)
/*
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='['||s[i]=='('||s[i]=='{'){
                st.push(s[i]);
            }
            else{
                if(st.size()==0) return false;
                
                    char ch=st.top();
                    st.pop();
                    if((s[i]==')' && ch=='(')||(s[i]=='}' && ch=='{')||(s[i]==']' && ch=='[')){
                        continue;
                    }
                    else{
                        return false;
                    }
            }
        }
        return st.empty();
    }
};
*/