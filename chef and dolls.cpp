#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        cout<<endl;
	    }
	    
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==arr[i+1])
	        {
	            i++;
	        }
	        else
	        {
	            cout<<arr[i]<<endl;
	            
	        }
	    }
	    
	}
	return 0;
}