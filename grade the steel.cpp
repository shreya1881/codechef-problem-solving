#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,c;
	    float b;
	    cin>>a>>b>>c;
	    if(a>50 && b<0.7 && c>5600) cout<<"10\n";
	    else if(a>50 && b<0.7 && c<=5600) cout<<"9\n";
	    else if(a<=50 && b<0.7 && c>5600) cout<<"8\n";
	    else if(a>50 && b>=0.7 && c>5600) cout<<"7\n";
	    else if(a>50 && b>=0.7 && c<=5600) cout<<"6\n";
	    else if(a<=50 && b<0.7 && c<=5600) cout<<"6\n";
	    else if(a<=50 && b>=0.7 && c>5600) cout<<"6\n";
	    else cout<<"5\n";
	}
	return 0;
}