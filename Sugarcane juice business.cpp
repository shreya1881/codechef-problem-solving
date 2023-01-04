#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a=n*50;
	    int b=a/5;
	    int c=a/5;
	    int d=3*a/10;
	    int x = b+c+d;
	    cout<<a-x<<endl;
	}
	return 0;
}