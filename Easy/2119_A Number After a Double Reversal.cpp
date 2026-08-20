/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-04 || 00:07:12
 * * * * File    : _2119_A Number After a Double Reversal.cpp
 */



// https://leetcode.com/problems/a-number-after-a-double-reversal/description/



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
    bool isSameAfterReversals(int num) {
        int main=num;
        int tmp=0;
        while(num!=0){
            int digit=num%10;
            tmp=tmp*10+digit;
            num/=10;
        }
        int tmp1=0;
        while(tmp!=0){
            int digit=tmp%10;
            tmp1=tmp1*10+digit;
            tmp/=10;
        }
        if(main==tmp1){
            return true;
        }
        return false;
    }
};