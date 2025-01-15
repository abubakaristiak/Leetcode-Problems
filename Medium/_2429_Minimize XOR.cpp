/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-15 || 12:39:29
 * * * * File    : _2429_Minimize XOR.cpp
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
    bool isSet(int &x, int bit){
        return x & (1<<bit);
    }

    bool setBit(int &x, int bit){
        return x |= (1<<bit);  
    }

    bool unsetBit(int &x, int bit){
        return x &= ~(1<<bit);
    }


    int minimizeXor(int num1, int num2) {
        int x=num1;
        int requriedSetBitCnt=__builtin_popcount(num2);
        int curSetBitCnt=__builtin_popcount(x);

        
        int bit=0;
        if(curSetBitCnt<requriedSetBitCnt){
            while (curSetBitCnt<requriedSetBitCnt)
            {
                if(!isSet(x,bit)){
                    setBit(x,bit);
                    curSetBitCnt++;
                }
                bit++;
            }
        }else if(curSetBitCnt>requriedSetBitCnt){
            while (curSetBitCnt>requriedSetBitCnt)
            {
                if(isSet(x,bit)){
                    unsetBit(x,bit);
                    curSetBitCnt--;
                }
                bit++;
            } 
        }
        return x;

    }
};