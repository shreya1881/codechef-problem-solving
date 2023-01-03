#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if(n<=6) cout<<x<<endl;
	    else{
	        if(n%6==0)
	        {
	            int a=n/6;
	            cout<<x*a<<endl;
	        }
	        else{
	            int b=n/6;
	            cout<<x*(b+1)<<endl;
	        }
	    }
	}
	return 0;
}
