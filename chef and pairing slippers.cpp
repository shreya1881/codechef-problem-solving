#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,l,x,a;
        cin>>n>>l>>x;
        a=n-l;
        if(a>=l)
        cout<<l*x<<endl;
        else
        cout<<a*x<<endl;
        
    }
	// your code goes here
	return 0;
}