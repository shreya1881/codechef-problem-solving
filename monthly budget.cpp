#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int a=y*30;
	    if(a<=x)
	    cout<<"Yes\n";
	    else
	    cout<<"No\n";
	}
	return 0;
}