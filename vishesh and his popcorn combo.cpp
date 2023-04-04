#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a1,a2;
	    cin>>a1>>a2;
	    int b1,b2;
	    cin>>b1>>b2;
	    int c1,c2;
	    cin>>c1>>c2;
	    int a = a1+a2;
	    int b = b1+b2;
	    int c = c1+c2;
	    if(a>=b && a>=c)
	    cout<<a<<endl;
	    else if(b>=a && b>=c)
	    cout<<b<<endl;
	    else
	    cout<<c<<endl;
	    
	}
	return 0;
}
