#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int shoes=2*n;
	    int ls=n,rs=n;
	    if(x>=n) ls=0;
	    else ls=(n-x);
	    cout<<ls+rs<<endl;
	    
	}
	return 0;
}