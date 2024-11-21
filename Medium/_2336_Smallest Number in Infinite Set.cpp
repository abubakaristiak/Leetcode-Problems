/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-21 || 12:42:17
 * * * * File    : _2336_Smallest Number in Infinite Set.cpp
 */


// https://leetcode.com/problems/smallest-number-in-infinite-set/description/?envType=study-plan-v2&envId=leetcode-75



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
class SmallestInfiniteSet {
public:
    vector<bool> nums;
    int i;
    SmallestInfiniteSet() {
        nums=vector<bool> (1001, true);
        i=1;
    }
    
    int popSmallest() {
        int res=i;
        nums[i]=false;
        for(int j=i+1; j<1001; j++){
            if(nums[j]==true){
                i=j;
                break;
            }
        }
        return res;
    }
    
    void addBack(int num) {
        nums[num]=true;
        if(num<i){
            i=num;
        }
    }
};