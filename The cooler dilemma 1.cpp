#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,m;
	    cin>>x>>y>>m;
	    int a=x*m;
	    if(a<y) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
