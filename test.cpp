#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a;
    cin>> a;
    int n=a.length();
    for(int i=0; i<n; i++){
        if(a[i]>=65 && a[i]<=90){
            a[i] = a[i]+32;
        }
    }
    cout << a << endl;

    return 0;
}