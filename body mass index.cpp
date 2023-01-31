#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int m,h;
	    cin>>m>>h;
	    int a = h*h;
	    int bmi = m/a;
	    if(bmi<=18) cout<<"1\n";
	    else if(bmi>=19 && bmi<=24) cout<<"2\n";
	    else if(bmi>=25 && bmi<=29) cout<<"3\n";
	    else cout<<"4\n";
	}
	return 0;
}