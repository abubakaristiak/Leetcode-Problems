//https://leetcode.com/problems/valid-perfect-square/description/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
public:
    bool isPerfectSquare(int num) {
        ll high=num;
        ll low=1;
        ll mid;
        ll sq;
        while(low<=high){
            mid = (low+high)/2;
            sq=mid*mid;
            if(sq==num) return true;
            else if(sq>num) high=mid-1;
            else low=mid+1;
        }
        return false;
    }
};