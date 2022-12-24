#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int c=0;
	    int arr[n];
	    for(int i=0; i<n; i++)
	    cin>>arr[i];
	    for(int i=0; i<n; i++)
	    {
	        if(arr[i]>k)
	        c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}