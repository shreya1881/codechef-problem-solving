#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if(x==0 || n==x) cout<<"0\n";
	    else{
	        int a=n-x;
	        if(a>x) cout<<x<<endl;
	        else cout<<a<<endl;
	    }
	}
	return 0;
}