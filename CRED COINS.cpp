#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int a=x*y;
	    if(a<100) cout<<"0\n";
	    else{
	        cout<<a/100<<endl;
	    }
	}
	return 0;
}