/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-30 || 00:48:54
 * * * * File    : _875_Koko Eating Bananas.cpp
 */



// https://leetcode.com/problems/koko-eating-bananas/description/?envType=study-plan-v2&envId=leetcode-75



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
    bool canEat(vector<int>& piles, int mid, int h){
        int curhours=0;
        for(int &x:piles){
            curhours+=x/mid;
            if(x%mid!=0){
                curhours++;
            }
        }
        return curhours<=h;
    }



    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();

        int l=1;
        int r=*max_element(piles.begin(), piles.end());

        while (l<r)
        {
            int mid=l+(r-l)/2;
            if(canEat(piles, mid, h)){
                r=mid;
            }else{
                l=mid+1;
            }
        }
        return l;
        
    }
};