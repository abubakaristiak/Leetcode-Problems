/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-04 || 18:58:29
 * * * * File    : _1930_Unique Length-3 Palindromic Subsequences.cpp
 */


// https://leetcode.com/problems/unique-length-3-palindromic-subsequences/description/



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
    int countPalindromicSubsequence(string s) {
        int n=s.length();

        unordered_set<char> letters;
        for(char &ch:s){
            letters.insert(ch);
        }

        int res=0;
        for(char letter:letters)
        {
            int left_idx=-1, right_idx=-1;

            for(int i=0; i<n; i++)
            {
                if(s[i]==letter)
                {
                    if(left_idx== -1)
                    {
                        left_idx=i;
                    }
                    right_idx=i;
                }
            }

            unordered_set<char> st;
            for(int mid=left_idx+1; mid<=right_idx-1; mid++){
                st.insert(s[mid]);
            }
            res+=st.size();

        }

        return res;
    }
};
