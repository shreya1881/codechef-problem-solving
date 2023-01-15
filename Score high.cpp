#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int na,nb,nc,nd;
	    cin>>na>>nb>>nc>>nd;
	    int x=max(na,nb);
	    int y=max(x,nc);
	    int z=max(y,nd);
	    cout<<z<<endl;
	    
	}
	return 0;
}