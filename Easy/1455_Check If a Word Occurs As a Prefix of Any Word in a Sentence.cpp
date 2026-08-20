/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-02 || 15:24:29
 * * * * File    : _1455_Check If a Word Occurs As a Prefix of Any Word in a Sentence.cpp
 */


// https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/description/


#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;


// Brute Force Approach
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        string res;
        int cnt=0, n=searchWord.size();
        for(char ch:sentence){
            if(ch==' '){
                if(res.size()>=n && res.substr(0,n)==searchWord){
                    return cnt+1;
                }else{
                    cnt++;
                    res="";
                }
            }else{
                res+=ch;
            }
        }
        if(res.size()>=n && res.substr(0,n)==searchWord){
            return cnt+1;
        }else return -1;
    }
};




// Optimal Approach:
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        istringstream ss(sentence);
        string word;
        int i=0;
        while(ss>>word){
            if(word.find(searchWord)==0){
                return i+1;
            }
            i++;
        }
        return -1;
    }
};
