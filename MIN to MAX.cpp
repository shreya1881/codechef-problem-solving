#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int count=0;
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	    cin>>arr[i];
	    int m = arr[0];
	    for(int i=0; i<n; i++){
	        if(arr[i]<m)
	        m=arr[i];
	    }
	    if(n==1){
	        cout<<"0\n";
	        break;
	    } 
	    else
	    {
	        for(int i=0; i<n; i++)
	        {
	            if(arr[i]!=m)
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
