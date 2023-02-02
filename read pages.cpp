#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    int a = x*y;
	    if(a<n) cout<<"NO\n";
	    else cout<<"YES\n";
	    
	}
	return 0;
}
