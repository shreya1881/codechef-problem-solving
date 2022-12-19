#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    if(a>100)
	    a=a-10;
	    cout<<a<<endl;
	}
	return 0;
}