/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-15 || 02:05:56
 * * * * File    : _1534_Count Good Triplets.cpp
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
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n=arr.size();
        int cnt=0;

        
        for(int i=0; i<=n-3; i++){
            for(int j=i+1; j<=n-2; j++){
                if(abs(arr[i]-arr[j])<=a){
                    for(int k=j+1; k<=n-1; k++){
                        if(abs(arr[j]-arr[k])<=b && abs(arr[i]-arr[k])<=c){
                            cnt++;
                        }
                    }
                }
            }
        }
        return cnt;
    }
}