#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
    if(1<=t<=1000){
	    for(int i=1; i<=t; i++){
	        int n,x;
	        cin>>n>>x;
	        if(1<=n,x<=100){
	            if((n-x)%4==0 && n>=x)
	            cout<<(n-x)/4<<endl;
	            else if((n-x)%4!=0 && n>=x)
	            cout<<((n-x)/4)+1<<endl;
	            else
	            cout<<0<<endl;
	        }
	    }
	}
	return 0;
}
