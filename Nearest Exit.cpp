#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x>=1 && x<=50)
	    cout<<"LEFT\n";
	    else cout<<"RIGHT\n";
	}
	return 0;
}
