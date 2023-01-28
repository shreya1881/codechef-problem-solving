#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int m,n,x;
	    cin>>m>>n>>x;
	    int a = n*x;
	    if(a<m) cout<<"YES\n";
	    else cout<<"NO\n";
	    
	}
	return 0;
}