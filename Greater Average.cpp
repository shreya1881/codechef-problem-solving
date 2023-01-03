#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    float c;
	    cin>>a>>b>>c;
	    float x=(float(a)+float(b))/2;
	    if(x>c) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
