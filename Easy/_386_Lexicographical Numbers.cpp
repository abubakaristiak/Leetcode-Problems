//https://leetcode.com/problems/lexicographical-numbers/description/?envType=daily-question&envId=2024-09-21

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string> c;
        for(int i=1; i<=n; i++){
            string tmp = to_string(i);
            c.push_back(tmp);
        }
        sort(c.begin(), c.end());
        
        vector<int> ans;
        for(auto ch : c){
            int val = stoi(ch);
            ans.push_back(val);
        }
        return ans;
    }
};