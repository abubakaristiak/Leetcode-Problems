/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-22 || 15:27:02
 * * * * File    : _374_Guess Number Higher or Lower.cpp
 */


// https://leetcode.com/problems/guess-number-higher-or-lower/description/?envType=study-plan-v2&envId=leetcode-75

#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int guess(int num);
using namespace std;
class Solution {
public:
    int guessNumber(int n) {
        int l=0, r=n;
        while(l<=r){
            int mid=l+(r-l)/2;
            int val=guess(mid);
            if(val==0){
                return mid;
            }else if(val==-1){
                r=mid-1;
            }else l=mid+1;
        }
        return -1;
    }
};