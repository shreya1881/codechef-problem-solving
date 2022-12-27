#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string r,s;
	    cin>>r;
	    cin>>s;
	    int cs,cr=0;
	    cs=count(s.begin(),s.end(),'1');
	    cr=count(r.begin(),r.end(),'1');
	    if(cs==cr)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	    
	}
	return 0;
}
