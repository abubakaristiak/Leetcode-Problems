/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-29 || 10:02:01
 * * * * File    : _922_Sort Array By Parity II.cpp
 */


// https://leetcode.com/problems/sort-array-by-parity-ii/description/


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
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even, odd;
        for(auto &num: nums){
            if(num%2==0){
                even.push_back(num);
            }else odd.push_back(num);
        }
        int num1=0, num2=0;
        for(int i=0; i<nums.size(); i++){
            if(i%2==0){
                nums[i]=even[num1++];
            }else nums[i]=odd[num2++];
        }
        return nums;   
    }
};