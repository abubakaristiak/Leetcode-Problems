/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-02 || 08:54:55
 * * * * File    : _2559_Count Vowel Strings in Ranges.cpp
 */


// https://leetcode.com/problems/count-vowel-strings-in-ranges/description/



#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
class Solution {
public:
    bool isVowel(char &ch){
        if(ch=='a' || ch=='e'|| ch=='i' || ch=='o' || ch=='u'){
            return true;
        }
        return false;
    }


    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int q=queries.size();
        int n=words.size();

        vector<int> res(q);
        vector<int> cumulativeSum(n);
        int sum=0;
        for(int i=0; i<n; i++){
            if(isVowel(words[i][0]) && isVowel(words[i].back())){
                sum++;
            }
            cumulativeSum[i]=sum;
        }


        for(int i=0; i<q; i++){
            int l=queries[i][0];
            int r=queries[i][1];

            res[i]=cumulativeSum[r]-((l>0) ? cumulativeSum[l-1]:0);
        }

        return res;
    }
};