#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int a = 5*n;
	    if(a>=m) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
