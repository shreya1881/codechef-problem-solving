#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int N,X,K;
	    cin>>N>>K>>X;
	    int a = N*X;
	    if(a<=K) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}