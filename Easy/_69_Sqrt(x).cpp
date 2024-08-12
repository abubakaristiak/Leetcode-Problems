//https://leetcode.com/problems/sqrtx/description/
/*
class Solution {
public:
    int mySqrt(int x) {
        long long sqrt = 1;
        long long i=0;
        while(i<=x){
            i = sqrt*sqrt;
            if(i>=x) break;
            sqrt++;
        }
        if(i>x) return sqrt-1;
        else return sqrt;
    }
};
*/