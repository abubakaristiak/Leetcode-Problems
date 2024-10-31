// https://leetcode.com/problems/minimum-total-distance-traveled/description/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
#define ll long long
    ll threshold = 1e16 + 2LL;

    ll mindist(vector<int> &robot, vector<vector<int>> &factory, int &n, int &m, int i, int j, int limit, vector<vector<vector<ll>>> &dp)
    {
        if (i == n)
        {
            return 0LL;
        }
        else if (j == m)
        {
            return threshold;
        }
        else if (dp[i][j][limit] != -1)
        {
            return dp[i][j][limit];
        }

        ll take = threshold, notake = threshold;

        if (limit > 0)
        {
            take = min(mindist(robot, factory, n, m, i + 1, j, limit - 1, dp),
                       mindist(robot, factory, n, m, i + 1, j + 1, (j + 1 < m) ? factory[j + 1][1] : -1, dp));
            if (take != threshold)
            {
                take += abs(robot[i] - factory[j][0]);
            }
        }

        notake = mindist(robot, factory, n, m, i, j + 1, (j + 1 < m) ? factory[j + 1][1] : -1, dp);
        return dp[i][j][limit] = min(take, notake);
    }

    long long minimumTotalDistance(vector<int> &robot, vector<vector<int>> &factory)
    {
        int n = robot.size();
        int m = factory.size();

        sort(robot.begin(), robot.end());
        sort(factory.begin(), factory.end());
        vector<vector<vector<ll>>> dp(n, vector<vector<ll>>(m, vector<ll>(101, -1)));
        return mindist(robot, factory, n, m, 0, 0, factory[0][1], dp);
    }
};
