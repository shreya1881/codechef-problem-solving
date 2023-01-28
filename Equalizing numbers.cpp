#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int flag=0;
	    for(int i=0; i<=1000; i++){
	        if(a+i == b-i)
	        {
	            flag=1;
	            cout<<"YES\n";
	            break;
	        }
	        else if(b+i == a-i)
	        {
	            flag = 1;
	            cout<<"YES\n";
	            break;
	        }
	        
	    }
	    if(flag==0)
	    cout<<"NO\n";
	}
	return 0;
}