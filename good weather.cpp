#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int arr[7];
	    for(int i=0; i<7; i++){
	        cin>>arr[i];
	    }
	    int cs=0,cr=0;
	    for(int i=0; i<7; i++){
	        if(arr[i]==1)
	        cs++;
	        else cr++;
	    }
	    if(cs>cr) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}