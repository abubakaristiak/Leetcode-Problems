/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-12 || 15:48:02
 * * * * File    : _43_Multiply Strings.cpp
 */

// https://leetcode.com/problems/multiply-strings/description/?envType=study-plan-v2&envId=programming-skills

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
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0"){
            return "0";
        }
        int sz1=num1.size();
        int sz2=num2.size();
        string res(sz1+sz2, '0');

        for(int i=sz1-1; i>=0; i--){
            for(int j=sz2-1; j>=0; j--){
                int pro=(num1[i]-'0')*(num2[j]-'0');
                int sum=pro+(res[i+j+1]-'0');
                res[i+j+1] = sum%10+'0';
                res[i+j]+=sum/10;
            }
        }
        int idx=res.find_first_not_of('0');
        return res.substr(idx);
    }
};