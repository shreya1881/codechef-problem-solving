#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int sum=0;
	    int f[n],c[n];
	    for(int i=0; i<n; i++)
	    cin>>f[i];
	    for(int i=0; i<n; i++)
	    cin>>c[i];
	    for(int i=0; i<n; i++)
	    {
	        if(f[i]>=x)
	        {
	            sum+=c[i];
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
