#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,p,q;
	    cin>>x>>p>>q;
	    if(p==q) cout<<"0\n";
	    else{
	        int a=p-q;
	        cout<<x*a<<endl;
	    }
	}
	return 0;
}