#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int a=x*2;
	    int b=y*5;
	    if(a>b)
	    cout<<"Chocolate\n";
	    else if(a<b)
	    cout<<"Candy\n";
	    else
	    cout<<"Either\n";
	    
	}
	return 0;
}
