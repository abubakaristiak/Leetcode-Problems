#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> prefix;
        for(auto& val:arr1){
            int num = val;
            while(num>0){
                prefix[num]++; 
                num /= 10;
            }
        }

        int mx = INT_MIN;
        for(auto& val:arr2){
            int num = val;
            
            int len = log10(num)+1;
            while(num>0){
                if(prefix.find(num)!=prefix.end()){
                    break;
                }
                num /= 10;

                len--;
            }

            mx = max(mx, len);
        }

        return mx;
    }
};