#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,x;
	    cin>>n>>m>>x;
	    int z = 2*(n+m);
	    cout<<z*x<<endl;
	}
	return 0;
}