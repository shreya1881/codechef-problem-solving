#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int t;
	cin>>t;
	while(t--){
	    int a,b,m;
	    cin>>a>>b>>m;
	    int l=abs(b-a);
	    if(abs(l-m)<l){
	        cout<<abs(l-m)<<endl;
	    }
	    else{
	        cout<<l<<endl;
	    }
	    
	}
	return 0;
}