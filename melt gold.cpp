#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    int sum=y,ans=0;
	    for(int i=1; i<x; i++)
	    {
	       sum+=i;
	       if(sum>x || sum==x)
	       {
	           ans = i;
	           break;
	       }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
