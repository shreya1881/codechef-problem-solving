#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    if(a<4)
	    cout<<"MILD\n";
	    else if(a>=4 && a<7)
	    cout<<"MEDIUM\n";
	    else
	    cout<<"HOT\n";
	}
	return 0;
}
