#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(b<a || b<c)
	    cout<<"No\n";
	    else cout<<"yes\n";
	}
	return 0;
}