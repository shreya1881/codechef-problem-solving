#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    int a=x1+y1;
	    int b=x2+y2;
	    if(a<b)
	    cout<<a<<endl;
	    else cout<<b<<endl;
	}
	return 0;
}
