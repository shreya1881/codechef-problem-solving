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
	    int c=0,c1=0;
	    while(n--){
	        string str;
	        cin>>str;
	        if(str[0]=='S') c++;
	        else c1++;
	    }
	    cout<<c<<" "<<c1<<endl;
	}
	return 0;
}