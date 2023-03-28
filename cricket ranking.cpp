#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a[3];
	    int b[3];
	    for(int i=0; i<3; i++)
	    cin>>a[i];
	    for(int i=0; i<3; i++)
	    cin>>b[i];
	    
	    int counta=0,countb=0;
	    for(int i=0; i<3; i++)
	    {
	        if(a[i]>b[i])
	        counta++;
	        
	        else
	        countb++;
	    }
	    if(counta>countb) cout<<"A\n";
	    else cout<<"B\n";
	}
	return 0;
}
