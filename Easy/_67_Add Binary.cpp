//https://leetcode.com/problems/add-binary/description/
 
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int alen=a.length();
        int blen=b.length();
        int i=0, carry=0;
        string res="";

        while(i<alen || i<blen || carry!=0){
            int x=0;
            if(i<alen && a[alen-i-1]=='1'){
                x=1;
            }
            int y=0;
            if(i<blen && b[blen-i-1]=='1'){
                y=1;
            }
            res=to_string((x+y+carry)%2)+res;
            carry=(x+y+carry)/2;
            i++;
        }
        return res;
    }
};