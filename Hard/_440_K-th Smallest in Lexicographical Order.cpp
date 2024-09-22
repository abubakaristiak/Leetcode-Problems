#include<bits/stdc++.h>
using namespace std;
int main()
{
class Solution {
public:
    int CountElements(long current_element, long next_element, int n){
        int count_num = 0;
        while(current_element <= n){
            count_num += (next_element - current_element);
            current_element *= 10;
            next_element *= 10;

            next_element = min(next_element, long(n+1));
        }
        return count_num;
    }

    int findKthNumber(int n, int k) {
        int current_element = 1;
        k -= 1;

        while(k > 0){
            int cnt = CountElements(current_element, current_element+1, n);
            if(cnt <= k){
                current_element++;
                k -= cnt;
            }
            else{
                current_element *= 10;
                k -= 1;
            }
        }
        return current_element;
    }
};
return 0;
}