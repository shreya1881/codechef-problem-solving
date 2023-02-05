#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int f = 0;
	for(int i=1; i<=10; i++){
	    if(n%i==0){
	        f=max(f,i);
	    }
	}
	cout<<f;
	return 0;
}
