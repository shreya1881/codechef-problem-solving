#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int a=1.07*x;
	    if(y<=a) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
