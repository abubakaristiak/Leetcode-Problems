#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x;
    cin >> x;
    bool flag=true;
    if(x>0){
        string s = to_string(x);
        int i=0, j=s.length()-1;
        while (i<j)
        {
            if(s[i]!=s[j]){
                flag=false;
                break;
            }
            i++;
            j--;
        }   
    }
    if(x<0) flag=false;
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}