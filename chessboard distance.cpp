#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    int a = abs(x1-x2);
	    int b = abs(y1-y2);
	    int z = max(a,b);
	    cout<<z<<endl;
	}
	return 0;
}