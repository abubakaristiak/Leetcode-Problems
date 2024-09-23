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


// Another approach:
class Solution {
public:
    void solve(int curr, int n,vector<int> &result){
        if(curr > n){
            return;
        }
        result.push_back(curr);
        for(int add_digit=0; add_digit<=9; add_digit++){
            int newNum = curr*10 + add_digit;
            if(newNum > n){
                return;
            }
            solve(newNum, n, result);
        }
    }

    vector<int> lexicalOrder(int n) {
        vector<int> result;
        for(int startNum=1; startNum<=9; startNum++){
            solve(startNum, n, result);
        }
        return result;
    }
};