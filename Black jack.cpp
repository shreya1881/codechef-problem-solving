#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int x=a+b;
	    int y=21-x;
	    if(y>10) cout<<"-1\n";
	    else{
	        cout<<y<<endl;
	    }
	}
	return 0;
}