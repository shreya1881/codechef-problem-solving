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
	    int count=0;
	    for(int i=0; i<n; i++)
	    {
	        if(a[i]>b[i] && b[i]>=a[i]/2)
	        count++;
	        
	        else if(a[i]<b[i] && a[i]>=b[i]/2)
	        count++;
	        
	        else if(a[i]==b[i])
	        count++;
	        
	    }
	    cout<<count<<endl;
	}
	return 0;
}
