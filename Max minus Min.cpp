#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int max,min;
	    if(a>b && a>c)
	    max=a;
	    else if(b>a && b>c)
	    max=b;
	    else
	    max=c;
	    
	    if(a<b && a<c)
	    min=a;
	    else if(b<c && b<a)
	    min=b;
	    else
	    min=c;
	    
	    cout<<max-min<<endl;
	}
	return 0;
}