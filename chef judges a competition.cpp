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
	    int max1=-1;
	    int ans1=-1;
	    int ans2=-1;
	    int max2=-1;
	    for(int i=0; i<n; i++)
	    {
	        if(a[i]>max1)
	        {
	        max1=a[i];
	        ans1=i;
	        }
	    }
	    a[ans1]=0;
	    for(int i=0; i<n; i++)
	    {
	        if(b[i]>max2)
	        {
	        max2=b[i];
	        ans2=i;
	        }
	    }
	    b[ans2]=0;
	    
	    int sum1=0;
	    int sum2=0;
	    for(int i=0; i<n; i++)
	    {
	        sum1+=a[i];
	        sum2+=b[i];
	    }
	    if(sum1<sum2)
	    cout<<"Alice\n";
	    else if(sum1>sum2)
	    cout<<"Bob\n";
	    else
	    cout<<"Draw\n";
	}
	return 0;
}
