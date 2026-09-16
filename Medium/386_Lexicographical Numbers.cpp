/*
||-----------------------------------||
||        Abu Bakar Istiak           ||
||     Chattogram Polytechnic        ||
||        Department of CST          ||
||    abubakar119147@gmail.com       ||
||-----------------------------------||
*/
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ull unsigned long long
#define pi pair<ll, ll>
#define vi vector<ll>
#define vpi vector<pi>
#define pb push_back
#define endl "\n"
#define sp " "
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define sz(x) (ll)(x).size()
#define minus cout << -1 << endl
#define zero cout << 0 << endl
#define MAX 100000
#define MOD 998244353
#define afor(i,a,b) for (ll i = (a); i < (b); ++i)
#define rfor(i,a,b) for (ll i = (a); i >= (b); --i)
#define asort(v) sort((v).begin(), (v).end())
#define rsort(v) sort((v).begin(), (v).end(), greater<>())
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

    
class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string> stringVec;
        for(int i=1; i<=n; i++){
            string tmpValue=to_string(i);
            stringVec.push_back(tmpValue);
        }
        asort(stringVec);

        vector<int> res;
        for(auto ch:stringVec){
            int value=stoi(ch);
            res.push_back(value);
        }
        return res;

    }
};


// Another approach:
class Solution {
public:
    void solve(int curr, int n,vector<int> &result){
        if(curr > n){
            return;
        }
        result.push_back(curr);
        for(int add_digit=0; add_digit<=9; add_digit++){
            int newNum = curr*10 + add_digit;
            if(newNum > n){
                return;
            }
            solve(newNum, n, result);
        }
    }

    vector<int> lexicalOrder(int n) {
        vector<int> result;
        for(int startNum=1; startNum<=9; startNum++){
            solve(startNum, n, result);
        }
        return result;
    }
};

