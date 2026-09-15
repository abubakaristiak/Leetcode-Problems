/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-14 || 18:45:14
 * * * * File    : _2657_Find the Prefix Common Array of Two Arrays.cpp
 */



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

// Naive Approach--Brute force--O(N^3);
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int> res(n);

        for(int i=0; i<n; i++){
            int cnt=0;
            for(int a_i=0; a_i<=i; a_i++){
                for(int b_i=0; b_i<=i; b_i++){
                    if(A[a_i]==B[b_i]){
                        cnt++;
                        break;
                    }
                }
            }
            res[i]=cnt;
        }
        return res;
    }
};



// Better Approach--O(N^2)
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int> res(n);
        vector<bool> isPresentA(n+1, false);
        vector<bool> isPresentB(n+1, false);

        for(int i=0; i<n; i++){
            isPresentA[A[i]]=true;
            isPresentB[B[i]]=true;

            int cnt=0;
            for(int j=1; j<=n; j++){
                if(isPresentA[j]==true && isPresentB[j]==true){
                    cnt++;
                }
            }
            res[i]=cnt;
        }
        return res;
    }
};