#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,k;
	    cin>>n>>x>>k;
	    if(x>k) cout<<"0\n";
	    else{
	        int a=k/x;
	        if(a<=n) cout<<a<<endl;
	        else cout<<n<<endl;
	    }
	}
	return 0;
}
