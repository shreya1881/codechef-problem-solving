#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=0;
	    int arr[n];
	    for(int i=0; i<n; i++)
	    cin>>arr[i];
	    for(int i=0; i<n; i++)
	    {
	        if(arr[i]>=10 && arr[i]<=60)
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}