#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int c=a+b;
	    if(c%2==0)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}