#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a<b)
	        a=a+c;
	    else
	        b=b+c;
	   	if(a<b)
	        a=a+d;
	    else
	        b=b+d;
	   	if(a<b)
	        cout<<"S\n";
	    else
	        cout<<"N\n";
	}
	return 0;
}