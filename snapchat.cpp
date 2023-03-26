#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int b[n];
	    for(int i=0; i<n; i++)
	    cin>>a[i];
	    for(int i=0; i<n; i++)
	    cin>>b[i];
	    int flag=0;
	    for(int i=0; i<n; i++)
	    {
	       if(a[i]!=0 && b[i]!=0)
	       flag++;
	    }
	    cout<<flag<<endl;
	}
	return 0;
}
