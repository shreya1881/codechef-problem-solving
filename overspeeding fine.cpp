#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x<=70) cout<<"0\n";
	    else if(x>70 && x<=100) cout<<"500\n";
	    else cout<<2000<<endl;
	}
	return 0;
}