#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int sum=a+b;
	    int c=0;
	    for(int i=2; i<sum; i++)
	    {
	    if(sum%i==0){
	        c=1;
	        break;
	    }
	    }
	    if(c==1) cout<<"Bob\n";
	    else cout<<"Alice\n";
	}
	return 0;
}