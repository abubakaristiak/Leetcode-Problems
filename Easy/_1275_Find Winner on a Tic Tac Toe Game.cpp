//https://leetcode.com/problems/find-winner-on-a-tic-tac-toe-game/description/?envType=study-plan-v2&envId=programming-skills

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int n=moves.size();
        vector<int> A(8,0), B(8,0);
        for(int i=0; i<n; i++){
            int r=moves[i][0], c=moves[i][1];
            vector<int> &player = (i%2==0)?A:B;
            player[r]++;
            player[c+3]++;
            if(r==c) player[6]++;
            if(r==2-c) player[7]++;
        }
        for(int i=0; i<8; i++) {
            if(A[i]==3) return "A";
            if(B[i]==3) return "B";
        }
        return moves.size()==9 ? "Draw":"Pending";
    }
};