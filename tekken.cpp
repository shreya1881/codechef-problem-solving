#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int abs_diff=abs(b-c);
	    if(abs_diff<a)
	    {
	        cout<<"YES";
	    }
	    else
	    cout<<"NO";
	    cout<<endl;
	}
	return 0;
}