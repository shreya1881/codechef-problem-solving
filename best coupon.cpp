#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t; 
	while(t--){
	    int a;
	    cin>>a;
	    int x=0.1*a;
	    if(x>100) cout<<x<<endl;
	    else cout<<"100\n";
	}
	return 0;
}