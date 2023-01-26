#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string a;
	    string l=" ",r=" ";
	    string final1=" ",final2=" ";
	    cin>>a;
	    for(int i=0; i<n/2; i++)
	    l=l+a[i];
	    
	    for(int i=n/2; i<n; i++)
	    r=r+a[i];
	    
	    final1 = l+r;
	    final2 = r+l;
	    
	    if(final1.compare(final2)==0)
	    cout<<"YES\n";
	    else cout<<"NO\n";
	    
	}
	return 0;
}