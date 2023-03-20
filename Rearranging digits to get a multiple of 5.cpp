#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int flag=0;
	    for(int i=0; i<n; i++)
	    {
	        if(s[i]=='0' || s[i]=='5')
	            flag++;
	    }
	    
	    if(flag>=1) cout<<"Yes\n";
	    else cout<<"No\n";
	}
	return 0;
}
