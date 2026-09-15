/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-20 || 15:03:29
 * * * * File    : _2516_Take K of Each Character From Left and Right.cpp
 */


// https://leetcode.com/problems/take-k-of-each-character-from-left-and-right/description/?envType=daily-question&envId=2024-11-20



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
    int takeCharacters(string s, int k) {
        int n=s.length();
        int cnt_a=0, cnt_b=0, cnt_c=0;
        for(char &ch:s){
            if(ch=='a') cnt_a++;
            else if(ch=='b') cnt_b++;
            else cnt_c++;
        }

        if(cnt_a<k || cnt_b<k || cnt_c<k) return -1;
        int i=0, j=0;
        int notDelWinSize=0;
        while(j<n){
            if(s[j]=='a') cnt_a--;
            else if(s[j]=='b') cnt_b--;
            else cnt_c--;
            while(i<=j && (cnt_a<k || cnt_b<k || cnt_c<k)){
                if(s[i]=='a') cnt_a++;
                else if(s[i]=='b') cnt_b++;
                else cnt_c++;
                i++;
            }
            notDelWinSize=max(notDelWinSize, j-i+1);
            j++;
        }
        return n-notDelWinSize;
    }
};