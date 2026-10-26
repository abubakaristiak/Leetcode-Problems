class Solution {
public:
    bool isValid(string s) {
    stack<char> st;
    
    int flag=0;
    for(char ch:s){
        if(ch=='(' || ch=='{' || ch=='['){
            st.push(ch);
        }else{
            if(st.empty()){
                return false;
            }
            char top=st.top();
            if((ch==')' && top=='(') || (ch=='}' && top=='{') || (ch==']' && top=='[')){
                st.pop();
            }else{
                flag=1;
                break;
            }
        }
    }
    if(st.empty() && flag!=1){
        return true;
    }else return false;
    }
};