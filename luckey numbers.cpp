#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int c=0;
	    while(n>0){
	        int k=n%10;
	        if(k==7)
	        {
	            c=1;
	        }
	        n=n/10;
	       
	    }
	     if(c==0) cout<<"NO\n";
	        else cout<<"YES\n";
	    
	}
	return 0;
}
