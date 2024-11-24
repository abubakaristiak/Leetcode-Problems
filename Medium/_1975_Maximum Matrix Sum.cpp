/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-24 || 11:28:40
 * * * * File    : _1975_Maximum Matrix Sum.cpp
 */


// https://leetcode.com/problems/maximum-matrix-sum/description/?envType=daily-question&envId=2024-11-24


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
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        long long sum=0;
        int negCnt=0, smallestVal=INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                sum+=abs(matrix[i][j]);
                if(matrix[i][j]<0){
                    negCnt++;
                }
                smallestVal=min(smallestVal, abs(matrix[i][j]));
            }
        }
        if(negCnt%2==0){
            return sum;
        }
        return sum-2*smallestVal;
        

    }
};