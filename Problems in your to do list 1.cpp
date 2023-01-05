#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int c=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	    cin>>arr[i];
	    for(int i=0; i<n; i++)
	    {
	        if(arr[i]>=1000)
	        c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}