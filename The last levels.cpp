#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x<=3) cout<<y*x<<endl;
	    else{
	        if(x%3!=0){
	        int a=x/3;
	        int b=a*z;
	        cout<<(y*x)+b<<endl;
	        }
	        else{
	            int a=(x/3)-1;
	            int b=a*z;
	            cout<<(y*x)+b<<endl;
	        }
	    }
	}
	return 0;
}
