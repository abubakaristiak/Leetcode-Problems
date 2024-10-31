// https://leetcode.com/problems/dota2-senate/description/?envType=study-plan-v2&envId=leetcode-75

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool removeSenator(string &senate, char ch, int idx)
    {
        bool left = false;
        while (true)
        {
            if (idx == 0)
                left = true;
            if (senate[idx] == ch)
            {
                senate.erase(senate.begin() + idx);
                break;
            }
            idx = (idx + 1) % (senate.length());
        }
        return left;
    }
    string predictPartyVictory(string senate)
    {
        int rCnt = count(senate.begin(), senate.end(), 'R');
        int dCnt = senate.length() - rCnt;

        int idx = 0;
        while (rCnt > 0 && dCnt > 0)
        {
            if (senate[idx] == 'R')
            {
                bool left = removeSenator(senate, 'D', (idx + 1) % (senate.length()));
                dCnt--;
                if (left)
                {
                    idx--;
                }
            }
            else
            {
                bool left = removeSenator(senate, 'R', (idx + 1) % (senate.length()));
                rCnt--;
                if (left)
                {
                    idx--;
                }
            }
            idx = (idx + 1) % (senate.length());
        }
        return rCnt == 0 ? "Dire" : "Radiant";
    }
};

// Different Approach using queue;
class Solution
{
public:
    string predictPartyVictory(string senate)
    {
        queue<char> q;
        int dires = 0, radiants = 0;
        for (char ch : senate)
        {
            q.push(ch);
            if (ch == 'D')
                dires++;
            if (ch == 'R')
                radiants++;
        }
        int dr = 0, rr = 0;
        while (!q.empty() && dires != 0 && radiants != 0)
        {
            char cur = q.front();
            q.pop();
            if (rr > 0 && cur == 'R')
            {
                rr--;
                radiants--;
                continue;
            }
            if (dr > 0 && cur == 'D')
            {
                dr--;
                dires--;
                continue;
            }
            if (cur == 'D')
                rr++;
            else if (cur == 'R')
                dr++;
            q.push(cur);
        }
        return dires == 0 ? "Radiant" : "Dire";
    }
};