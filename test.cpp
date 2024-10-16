#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    bool flag=false;
    for(int i=1; i<n-1; i++){
        if(n%i==0){
            flag=true;
            break;
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO"<< endl;
    return 0;
}