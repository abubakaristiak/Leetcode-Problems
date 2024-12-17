/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-17 || 17:58:03
 * * * * File    : _2182_Construct String With Repeat Limit.cpp
 */


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
    string repeatLimitedString(string s, int repeatLimit) {
        vector<int> cnt(26, 0);
        for(char &ch:s){
            cnt[ch-'a']++;
        }
        string res;
        int i=25;
        while(i>=0){
            if(cnt[i]==0){
                i--;
                continue;
            }
            char ch='a'+i;
            int fre=min(cnt[i], repeatLimit);

            res.append(fre, ch);
            cnt[i]-=fre;
            if(cnt[i]>0){
                int j=i-1;
                while(j>=0 && cnt[j]==0){
                    j--;
                }
                if(j<0){
                    break;
                }
                res.push_back('a'+j);
                cnt[j]--;
            }
        }
        return res;
    }
};