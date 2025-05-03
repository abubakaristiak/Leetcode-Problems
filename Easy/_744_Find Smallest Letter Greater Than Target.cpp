/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-05-04 || 00:19:07
 * * * * File    : _744_Find Smallest Letter Greater Than Target.cpp
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
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        for(int i=0; i<n; i++){
            char ch=letters[i];
            if(ch>target){
                return ch;
            }
        }
        return letters[0];
    }
};


// Binary Search:
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        int l=0, r=n-1;
        int pos=-1;
        while (l<=r)
        {
            int mid=l+(r-l)/2;
            if(letters[mid]>target){
                pos=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        if(pos==-1){
            return letters[0];
        }else letters[pos];
    }
};