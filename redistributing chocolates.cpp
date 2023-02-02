#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z,n,c=0;
        cin>>x>>y>>z;
        n=x+y+z;
        if(n>=6)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
	return 0;
}