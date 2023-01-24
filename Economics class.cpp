#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n; cin>>n;
	    int s[n],d[n];
	    for(int i=0; i<n; i++)
	    cin>>s[i];
	    for(int i=0; i<n; i++)
	    cin>>d[i];
	    int count=0;
	    for(int j=0; j<n; j++)
	    {
	        if(s[j]==d[j])
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}