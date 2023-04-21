#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int a = m*6*6;
	    if(n<=a)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
