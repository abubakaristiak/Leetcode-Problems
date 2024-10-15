//https://leetcode.com/problems/length-of-last-word/description/?envType=study-plan-v2&envId=programming-skills

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int i=n-1;
        while(i>=0 && s[i]==' '){
            i--;
        }
        int lenCnt=0;
        while(i>=0 && s[i]!=' '){
            i--;
            lenCnt++;
        }
        return lenCnt;
    }
};



// another approach using STL
class Solution {
public:
    int lengthOfLastWord(string s) {
        int idx=s.find_last_not_of(' ')+1;
        s.erase(idx);
        int last_space_idx=s.find_last_of(' ');
        return last_space_idx == string::npos ? s.length() : s.length()-last_space_idx-1;
    }
};