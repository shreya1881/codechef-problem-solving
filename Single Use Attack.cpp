#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int h,x,y;
	    cin>>h>>x>>y;
	    h = h-y;
	    int c=1;
	    while(h>0){
	        h-=x;
	        c++;
	    }
	    cout<<c<<endl;
	    
	}
	return 0;
}
