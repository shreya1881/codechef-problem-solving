#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,p,q;
	    cin>>x>>y>>p>>q;
	    int a = x + (p*10);
	    int b = y + (q*10);
	    if(a<b) cout<<"Chef\n";
	    else if (b<a) cout<<"Chefina\n";
	    else cout<<"Draw\n";
	}
	return 0;
}
