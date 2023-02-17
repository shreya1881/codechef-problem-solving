#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int g1,s1,b1,g2,s2,b2;
	    cin>>g1>>s1>>b1>>g2>>s2>>b2;
	    int first=g1+s1+b1;
	    int second=g2+s2+b2;
	    if(first>second)
	    {
	        cout<<"1"<<endl;
	    }
	    else
	    {
	        cout<<"2"<<endl;
	    }
	}
	return 0;
}