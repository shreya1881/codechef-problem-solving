#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    float x = (float(a)+float(b))/2;
	    float y = (float(b)+float(c))/2;
	    float z = (float(c)+float(a))/2;
	    if(x<35 || y<35 || z<35)
	    cout<<"Fail\n";
	    else cout<<"Pass\n";
	}
	return 0;
	
}
