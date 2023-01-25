#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s,t,temp=" ";
	    cin>>s;
	    cin>>t;
	    for(int i=0; i<s.length(); i++)
	    {
	        if(s[i]!=t[i])
	        temp=temp+'B';
	        else
	        temp=temp+'G';
	    }
	    cout<<temp<<endl;
	}
	return 0;
}
