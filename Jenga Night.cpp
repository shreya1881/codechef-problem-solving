#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if(n==x) cout<<"Yes\n";
	    else if(n>x) cout<<"No\n";
	    else{
	        if(x%n==0) cout<<"Yes\n";
	        else cout<<"No\n";
	    }
	}
	return 0;
}