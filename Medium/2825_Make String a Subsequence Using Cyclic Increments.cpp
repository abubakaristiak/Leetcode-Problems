/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-04 || 16:54:02
 * * * * File    : _2825_Make String a Subsequence Using Cyclic Increments.cpp
 */


// https://leetcode.com/problems/make-string-a-subsequence-using-cyclic-increments/description/



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
class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int len1=str1.length();
        int len2=str2.length();

        int i=0, j=0;
        while(i<len1 && j<len2){
            if((str1[i]==str2[j]) || (str1[i]+1==str2[j]) || (str1[i]-25==str2[j])){
                j++;
            }
            i++;
        }
        return j==str2.length();
    }
};