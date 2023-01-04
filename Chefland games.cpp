#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a[4];
	    int c=0;
	    for(int i=0; i<4; i++)
	    cin>>a[i];
	    for(int i=0; i<4; i++)
	    {
	        if(a[i]==1)
	        {
	            c=1;
	            break;
	        }
	    }
	    if(c==1)
	    cout<<"OUT\n";
	    else cout<<"IN\n";
	}
	return 0;
}
