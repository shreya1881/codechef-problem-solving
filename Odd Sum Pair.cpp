#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(((a+b)%2!=0)||((b+c)%2!=0)||((a+c)%2!=0)) cout<<"YES\n";
	    else cout<<"No\n";
	}
	return 0;
}
