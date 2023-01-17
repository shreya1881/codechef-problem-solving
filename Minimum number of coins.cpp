#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x%5!=0 && x%10!=0) cout<<"-1\n";
	    else if (x%10==0) cout<<x/10<<endl;
	    else{
	        int a = x%10;
	        int b = a/5;
	        int c = x/10;
	        cout<<b+c<<endl;
	    }
	}
	return 0;
}