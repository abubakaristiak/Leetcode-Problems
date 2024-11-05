// https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/description/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minChanges(string s) {
        int n=s.length();
        char ch=s[0];
        int cnt=0, changes=0;

        for(int i=0; i<n; i++){
            if(s[i]==ch){
                cnt++;
                continue;
            }
            if(cnt%2==0){
                cnt=1;
            }else{
                changes++;
                cnt=0;
            }
            ch=s[i];
        }
        return changes;
    }
};




// Another approach(easy)
class Solution {
public:
    int minChanges(string s) {
        int n=s.length();
        int changes=0;
        for(int i=0; i<n; i+=2){
            if(s[i]!=s[i+1]){
                changes++;
            }
        }
        return changes;
    }
};