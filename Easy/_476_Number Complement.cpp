/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : Abu Bakar Istiak
 * * * * Created : 2025-03-24 || 16:21:50
 * * * * File    : 476. Number Complement.cpp
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
    int findComplement(int num) {
        vector<int> binary;
        while(num!=0){
            binary.push_back(num%2);
            num/=2;
        }
        for(int i=0; i<binary.size(); i++){
            if(binary[i]==1){
                binary[i]=0;
            }else binary[i]=1;
        }
        int res=0;
        for(int i=binary.size()-1; i>=0; i--){
            res=res*2+binary[i];
        }
        return res;
    }
};