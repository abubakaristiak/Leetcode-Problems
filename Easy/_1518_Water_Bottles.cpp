//https://leetcode.com/problems/water-bottles/
/*
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int usableBottles = numBottles;
        while (numBottles >= numExchange) {
            int exBottles = numBottles / numExchange;
            usableBottles += exBottles;
            numBottles = exBottles + (numBottles % numExchange);
        }
        return usableBottles;
    }
};
*/