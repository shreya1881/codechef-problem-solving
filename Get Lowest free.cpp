#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int x = min(a,b);
	    int y = min(x,c);
	    int sum = a+b+c;
	    cout<<sum-y<<endl;
	}
	return 0;
}