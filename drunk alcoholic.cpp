#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int count=0;
	    int k; cin>>k;
	    if(k%2==0)
	    {
	        cout<<k<<endl;
	    }
	    else
	    {
	        cout<<k+2<<endl;
	    }
	}
	return 0;
}
