#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int total = 2*n;
	    while(x--){
	        total-=1;
	    }
	    cout<<total+1<<endl;
	}
	return 0;
}
