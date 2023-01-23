#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a,b,s;
	    cin>>n>>a>>b;
	    for(int i=1; i<=20; i++){
	        if(pow(2,i)==n)
	        {
	        s = i;
	        break;
	        }
	    }
	    int y = s*a;
	    int z = (s-1)*b;
	    cout<<y+z<<endl;
	}
	return 0;
}