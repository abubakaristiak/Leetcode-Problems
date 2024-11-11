/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-11 || 12:49:50
 * * * * File    : _2601_Prime Subtraction Operation.cpp
 */


// https://leetcode.com/problems/prime-subtraction-operation/description/

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
    bool isPrime[1000];
    void sieve(){
        fill(isPrime, isPrime+1000, true);
        isPrime[0]=false;
        isPrime[1]=false;
        for(int i=2; i*i<1000; i++){
            if(isPrime[i]==true){
                for(int j=i*i; j<1000; j+=i){
                    isPrime[j]=false;
                }
            }
        }
    }
    bool primeSubOperation(vector<int>& nums) {
        int n=nums.size();
        sieve();

        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]) continue;
            for(int p=2; p<nums[i]; p++){
                if(!isPrime[p]) continue;
                if(nums[i]-p<nums[i+1]){
                    nums[i]-=p;
                    break;
                }
            }
            if(nums[i]>=nums[i+1]) return false;
        }
        return true;
    }
};