//https://leetcode.com/problems/string-compression/description/?envType=study-plan-v2&envId=leetcode-75

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int index=0;
        int i=0; 
        while(i<n){
            char current_ch=chars[i];
            int count=0;
            while(i<n && chars[i]==current_ch){
                count++;
                i++;
            }
            chars[index]=current_ch;
            index++;
            if(count>1){
                string count_str = to_string(count);
                for(char &ch:count_str){
                    chars[index]=ch;
                    index++;
                }
            }
        }
        return index;
    }
};