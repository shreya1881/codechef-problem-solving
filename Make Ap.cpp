#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,c;
	    cin>>a>>c;
	    int x=-1;
	    for(int i=a; i<=c; i++)
	    {
	        if((i-a) == (c-i)) 
	        x=i;
	    }
	    cout<<x<<endl;
	}
	return 0;
}
