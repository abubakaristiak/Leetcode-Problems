//https://leetcode.com/problems/circular-sentence/description/?envType=daily-question&envId=2024-11-02

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n=sentence.size();
        for(int i=0; i<n; i++){
            if(sentence[i]==' '){
                if(sentence[i-1]!=sentence[i+1]){
                    return false;
                }
            }
        }
        return (sentence[0]==sentence[n-1]);
    }
};