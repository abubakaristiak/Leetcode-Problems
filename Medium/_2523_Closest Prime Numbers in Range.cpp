/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-08 || 02:46:26
 * * * * File    : _2523_Closest Prime Numbers in Range.cpp
*/


#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


class Solution {
public:
    vector<bool> solve(int right){
        vector<bool> isPrime(right+1, true);
        isPrime[0]=false;
        isPrime[1]=false;
        for(int i=2; i*i<=right; i++){
            if(isPrime[i]==true){
                for(int j=2; i*j<=right; j++){
                    isPrime[i*j]=false;
                }
            }
        }
        return isPrime;
    
    }
    vector<int> closestPrimes(int left, int right) {
        vector<bool> isPrime=solve(right);

        vector<int> primes;
        for(int i=left; i<=right; i++){
            if(isPrime[i]==true){
                primes.push_back(i);
            }
        }
        int mn=INT_MAX;
        vector<int> res={-1,-1};
        for(int i=1; i<primes.size(); i++){
            int diff=primes[i]-primes[i-1];
            if(diff<mn){
                mn=diff;
                res={primes[i-1], primes[i]};
            }
        }
        return res;
    }
};