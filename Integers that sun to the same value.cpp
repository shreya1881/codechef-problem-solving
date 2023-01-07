#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int c=0;
	for(int i=1; i<=n; i++)
	{
	    for(int j=1; j<=n; j++)
	    {
	        if(i+j == n)
	        c++;
	    }
	}
	cout<<c<<endl;
	return 0;
}