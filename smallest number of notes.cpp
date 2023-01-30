#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n; cin>>n;
	    int a=0,b=0,c=0,d=0,e=0,f=0;
	    if(n>=100){
	        a = n/100;
	        n = n%100;
	    }
	    if(n>=50){
	        b = n/50;
	        n = n%50;
	    }
	    if(n>=10){
	        c = n/10;
	        n=n%10;
	    }
	    if(n>=5){
	        d = n/5;
	        n = n%5;
	    }
	    if(n>=2){
	        e = n/2;
	        n = n%2;
	    }
	    if(n>=1){
	        f = n/1;
	        n = n%1;
	    }
	    cout<<a+b+c+d+e+f<<endl;
	}
	return 0;
}