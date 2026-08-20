/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-28 || 23:25:43
 * * * * File    : _409_Longest Palindrome.cpp
*/


class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.length();
        set<char> st;

        int res=0;
        for(char ch:s){
            if(st.count(ch)){
                res+=2;
                st.erase(ch);
            }else{
                st.insert(ch);
            }
        }
        if(!st.empty()){
            res++;
        }
        return res;
    }
};