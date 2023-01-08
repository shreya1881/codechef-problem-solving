#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int k=max(a,b);
	    int p=max(k,c);
	    cout<<p<<endl;
	}
	return 0;
}