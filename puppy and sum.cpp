#include <iostream>
using namespace std;

int sum(int d, int n){
    while(d>0)
    {
    n = n*(n+1)/2;
    d--;
    }
    return n;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int d,n;
	    cin>>d>>n;
	    cout<<sum(d,n)<<endl;
	}
	return 0;
}
