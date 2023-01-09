#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(y>x) cout<<"0\n";
	    else{
	        int a=2*y;
	        if(a>x) cout<<"0\n";
	        else{
	            cout<<x/a<<endl;
	        }
	    }
	}
	return 0;
}