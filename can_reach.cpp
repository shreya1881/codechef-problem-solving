#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,k;
	    cin>>x>>y>>k;
	    if(k<=abs(x) && k<=abs(y))
	    {
	        if(x%k==0 && y%k==0)
	            cout<<"Yes"<<endl;
	        else
	            cout<<"No"<<endl;
	    }
	    else
	        cout<<"No"<<endl;
	    
	}
	return 0;
}