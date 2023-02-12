#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t , n ;
	cin>>t;
	while(t--) {
	    cin>>n;
	    int sum=0;
	    while(n>0) {
	        sum += n/5;
	        n /= 5;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
