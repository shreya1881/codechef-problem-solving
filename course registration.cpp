#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    cin>>n>>m>>k;
	    int a=m-k;
	    if(n<=a)
	    cout<<"Yes\n";
	    else cout<<"No\n";
	}
	return 0;
}