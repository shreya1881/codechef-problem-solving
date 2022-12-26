#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    in>>x>>y;
	    int a=x*100;
	    int b=y*10;
	    if(a>b)
	    cout<<"CLOTH\n";
	    else if(a<b)
	    cout<<"DISPOSABLE\n";
	    else
	    cout<<"CLOTH\n";
	}
	return 0;
}