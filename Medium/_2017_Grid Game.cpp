/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-21 || 12:35:04
 * * * * File    : _2017_Grid Game.cpp
 */



// https://leetcode.com/problems/grid-game/



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


class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        ll firstRowremainSum = accumulate(grid[0].begin(), grid[0].end(), 0LL);
        ll secondRowremainSum = 0;
        ll minRobot2Sum = LLONG_MAX;


        for(int r1Col=0; r1Col<grid[0].size(); r1Col++){
            firstRowremainSum -= grid[0][r1Col];
            ll bestr2Sum = max(firstRowremainSum, secondRowremainSum);
            minRobot2Sum = min(minRobot2Sum, bestr2Sum);
            secondRowremainSum += grid[1][r1Col];
        }
        return minRobot2Sum;

    }
};