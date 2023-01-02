#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    if(w>x)
	    cout<<"overflow\n";
	    else{
	    int a=y*z;
	    int b=x-w;
	    if(a==b)
	    cout<<"filled\n";
	    else if(a>b)
	    cout<<"overflow\n";
	    else
	    cout<<"Unfilled\n";
	    }
	}