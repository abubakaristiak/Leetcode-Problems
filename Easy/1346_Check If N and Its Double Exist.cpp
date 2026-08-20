/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-01 || 15:26:55
 * * * * File    : _1346_Check If N and Its Double Exist.cpp
 */


// https://leetcode.com/problems/check-if-n-and-its-double-exist/description/


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
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i!=j && arr[i]==2*arr[j]){
                    return true;
                }
            }
        }
        return false;
    }
};




// Another approach by using binary tree;
class Solution {
public:
    int binarySearch(vector<int>& arr, int target){
        int l=0, r=arr.size()-1;
        int mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(arr[mid]==target){
                return mid;
            }else if(arr[mid]>target){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return -1;
    }
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        for(int i=0; i<n; i++){
            int j=binarySearch(arr, 2*arr[i]);
            if(j!=-1 && i!=j){
                return true;
            }
        }
        return false;
        
    }
};