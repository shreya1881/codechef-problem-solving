#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,r;
	cin>>n>>r;
	while(n--){
	    int R;
	    cin>>R;
	    if(R>=r) cout<<"Good boi"<<endl;
	    else cout<<"Bad boi\n";
	}
	return 0;
}
