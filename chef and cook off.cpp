#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int count=0;
	    int arr[5];
	    for(int i=0; i<5; i++)
	    cin>>arr[i];
	    
	    for(int i=0; i<5; i++)
	    {
	        if(arr[i]==1)
	        count++;
	    }
	    if(count==0)
	    cout<<"Beginner\n";
	    else if(count==2)
	    cout<<"Middle Developer\n";
	    else if(count==1)
	    cout<<"Junior Developer\n";
	    else if(count==3)
	    cout<<"Senior Developer\n";
	    else if(count==4)
	    cout<<"Hacker\n";
	    else
	    cout<<"Jeff Dean\n";
	}
	
	return 0;
}
