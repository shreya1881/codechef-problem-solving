#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(a>b)
	    cout<<a-b<<endl;
	    else 
	    cout<<b-a<<endl;
	}
	return 0;
}