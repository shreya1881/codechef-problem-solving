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
	    int r[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>r[i];
	    }
	   int  c=0;
	   int R=0,b=0;
	   
	    for(int i=0;i<n;i++)
	    
	     {   
	    
	     R+=r[i];
	    b++;
	    // float a=(R/b)*100;
	        if(R==b)
	        c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}