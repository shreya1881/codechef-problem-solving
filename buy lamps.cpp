#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,x,y;
	    cin>>n>>k>>x>>y;
	    if(n==k) cout<<k*x<<endl;
	    else{
	        int a = k*x;
	        int b = n-k;
	        if(x<y) 
	        {
	            int c = b*x;
	            cout<<c+a<<endl;
	        }
	        else{
	            int d = b*y;
	            cout<<d+a<<endl;
	        }
	    }
	}
	return 0;
}