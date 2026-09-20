//https://leetcode.com/problems/sentence-similarity-iii/


// Pointer:
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
        if(s1.length() < s2.length()){
            swap(s1,s2);
        }

        vector<string> v1,v2;
        stringstream ss1(s1);
        string token;
        while(ss1 >> token){
            v1.push_back(token);
        }
        stringstream ss2(s2);
        while(ss2 >> token){
            v2.push_back(token);
        }


        int i=0, j=v1.size()-1;
        int k=0, l=v2.size()-1;
        while(k<v2.size() && i<v1.size() && v2[k]==v1[i]){
            k++;
            i++;
        }
        while(l>=k && v2[l]==v1[j]){
            j--;
            l--;
        }
        return l<k;

    }
};


// dequee:
class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
        if(s1.length() < s2.length()){
            swap(s1,s2);
        }

        deque<string> d1,d2;
        stringstream ss1(s1);
        string token;
        while(ss1 >> token){
            d1.push_back(token);
        }
        stringstream ss2(s2);
        while(ss2 >> token){
            d2.push_back(token);
        }


        while(!d1.empty() && !d2.empty() && d1.front()==d2.front()){
            d1.pop_front();
            d2.pop_front();
        }
        while(!d1.empty() && !d2.empty() && d1.back()==d2.back()){
            d1.pop_back();
            d2.pop_back();
        }
        return d2.empty();

    }
};