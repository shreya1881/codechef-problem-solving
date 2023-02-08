#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n<1600) cout<<"3\n";
	    else if(n>=1600 && n<2000) cout<<"2\n";
	    else cout<<"1\n";
	}
	return 0;
}
