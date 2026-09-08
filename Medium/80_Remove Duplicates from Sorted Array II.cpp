/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-19 || 10:53:16
 * * * * File    : _05_80. Remove Duplicates from Sorted Array II.cpp
 */



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
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int l=0, r=0;
        while(r<n){
            int cnt=1;
            while(r+1<n && nums[r]==nums[r+1]){
                r++,cnt++;
            }
            int limit=min(2, cnt);
            for(int i=0; i<limit; i++){
                nums[l]=nums[r];
                l++;
            }
            r++;
        }
        return l;
        
    }
};



// Another approach:
/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-06-05 || 18:37:21
 * * * * File    : _80_Remove Duplicates from Sorted Array II.cpp
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int k=2;

        if(n<2){
            return 1;
        }
        for(int i=2; i<n; i++){
            if(nums[k-2]!=nums[i]){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};