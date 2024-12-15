/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-15 || 18:05:26
 * * * * File    : _1792_Maximum Average Pass Ratio.cpp
 */


// https://leetcode.com/problems/maximum-average-pass-ratio/description/


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
    #define P pair<double, int>
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        int n=classes.size();
        priority_queue<P> pq;


        for(int i=0; i<n; i++)
        {
            double curPr=(double)classes[i][0]/classes[i][1];
            double newPr=(double)(classes[i][0]+1)/(classes[i][1]+1);
            double delta=newPr-curPr;
            pq.push({delta, i});
        }


        while(extraStudents--){
            auto cur=pq.top();
            pq.pop();

            double delta=cur.first;
            int idx=cur.second;

            classes[idx][0]++;
            classes[idx][1]++;

            double curPr=(double)classes[idx][0]/classes[idx][1];
            double newPr=(double)(classes[idx][0]+1)/(classes[idx][1]+1);
            delta=newPr-curPr;
            pq.push({delta, idx});
        }

        double res=0.0;
        for(int i=0; i<n; i++){
            res+=(double)classes[i][0]/classes[i][1];
        }
        return res/n;
    }
};