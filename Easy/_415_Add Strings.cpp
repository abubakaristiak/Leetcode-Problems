/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-12 || 13:46:19
 * * * * File    : 415. Add Strings.cpp
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
    string addStrings(string num1, string num2) {
        int n1=num1.size()-1;
        int n2=num2.size()-1;
        int carry=0;

        string res;
        while (n1>=0 || n2>=0)
        {
            if(n1<0){
                res.push_back(((num2[n2]-48+carry)%10)+48);
                carry=(num2[n2]-48+carry)/10;
                n2--;
            }else if(n2<0){
                res.push_back(((num1[n1]-48+carry)%10)+48);
                carry=(num1[n1]-48+carry)/10;
                n1--;
                
            }else{
                res.push_back(((num1[n1]-48+num2[n2]-48+carry)%10)+48);
                carry=(num1[n1]-48+num2[n2]-48+carry)/10;
                n1--;
                n2--;
            }
        }
        if(carry){
            res.push_back(carry+48);
        }
        reverse(res.begin(), res.end());
        return res;
        
    }
};