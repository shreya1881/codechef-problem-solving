#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if(n%x!=0) cout<<"No\n";
	    else{
	        int a=n/x;
	        if(a%2==0) cout<<"Yes\n";
	        else cout<<"No\n";
	    }
	}
	return 0;
}