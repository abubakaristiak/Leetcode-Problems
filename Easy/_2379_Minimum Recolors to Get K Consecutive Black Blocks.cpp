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
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int result = k;

        for (int i = 0; i <= n - k; i++) {
            int W = 0;
            for (int j = i; j-i+1 <= k; j++) {
                if (blocks[j] == 'W') {
                    W++;
                }
            }
            result = min(result, W);
        }

        return result;
    }
};

// Alhamdulillah---(Ramadan Kareem)