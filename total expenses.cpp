#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
        cin>>x>>y;
	    float m=x*y;
        if(x>1000){
            cout<<fixed<<setprecision(6)<<(m)-(m*0.1)<<endl;
        }
        else{
            cout<<fixed<<setprecision(6)<<m<<endl;
        }
	    
	}
	return 0;
}
