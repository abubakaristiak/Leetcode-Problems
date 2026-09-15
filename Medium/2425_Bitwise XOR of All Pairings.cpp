/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-16 || 12:01:04
 * * * * File    : _2425_Bitwise XOR of All Pairings.cpp
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
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();

        unordered_map<int, ll> mp;
        for(int &num:nums1){
            mp[num]+=m;
        }

        for(int &num:nums2){
            mp[num]+=n;
        }

        int res=0;
        for(auto &it:mp){
            int num=it.first;
            int fre=it.second;
            if(fre%2!=0){
                res^=num;
            }
        }
        return res;
    }
};



// Better Approach:
class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();

        int Xor=0;
        if(m%2 != 0){
            for(int &num:nums2){
                Xor^=num;
            }
        }
        if(n%2 != 0){
            for(int &num:nums1){
                Xor^=num;
            }
        }
        return Xor;
    }
};

// Alhamdulillah
