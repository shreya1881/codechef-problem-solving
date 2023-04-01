#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,b;
	    cin>>n>>b;
	    int a[n];
	    for(int i=1; i<=n; i++)
	    cin>>a[i];
	    
	    int max=-1;
	    int flag=0;
	    for(int i=1; i<=n; i++)
	    {
	        if(a[i]<b)
	        {
	            flag=1;
	            if(max<i)
	            max=i;
	        }
	    }
	    if(flag==1)
	    cout<<max<<endl;
	    else
	    cout<<0<<endl;
	}
	return 0;
}
