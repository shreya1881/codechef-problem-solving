#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int D,d,a,b,c;
	    cin>>D>>d>>a>>b>>c;
	    int x = D*d;
	    if(x<10 && x<21 && x<42 ) cout<<"0\n";
	    else if(x<10) cout<<"0\n";
	    else if(x==10) cout<<a<<endl;
	    else if(x==21) cout<<b<<endl;
	    else if(x==42) cout<<c<<endl;
	    else if(x>10 && x<21) cout<<a<<endl;
	    else if(x>21 && x<42) cout<<b<<endl;
	    else if(x>42) cout<<c<<endl;
	    
	}
	return 0;
}
