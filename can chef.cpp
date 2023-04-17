#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a ,b;
	    cin>>a>>b;
	    int c = a*15;
	    int d = b*2;
	    if(c>=d)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
