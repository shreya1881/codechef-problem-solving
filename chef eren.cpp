#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    int a,b;
	    cin>>n>>a>>b;
	    int arr[n];
	    for(int i=1; i<=n; i++)
	    arr[i]=i;
	    int sum=0,sum1=0;
	    for(int i=1; i<=n; i++)
	    {
	        if(i%2!=0)
	        sum+=(1*b);
	        
	        else
	        sum1+=(1*a);
	    }
	    cout<<sum+sum1<<endl;
	}
	return 0;
}
